// Given a singly linked list

//     L: L0 → L1 → … → Ln-1 → Ln,
// reorder it to:

//     L0 → Ln → L1 → Ln-1 → L2 → Ln-2 → …
// You must do this in-place without altering the nodes’ values.

// For example,
// Given {1,2,3,4}, reorder it to {1,4,2,3}.


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 
ListNode* reverse(ListNode *A){
    ListNode *curr=A;
    ListNode *prev = NULL;
    while(curr!=NULL){
        ListNode *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}
ListNode* Solution::reorderList(ListNode* A) {
    ListNode *slow=A;
    ListNode *fast = A;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
    }
    ListNode *head1 = A;
    ListNode *head2 = slow->next;
    slow->next = NULL;
    head2 = reverse(head2);
    
    ListNode *result = new ListNode(0);
    ListNode *curr = result;
    while(head1||head2){
        if(head1){
            curr->next = head1;
            curr=curr->next;
            head1=head1->next;
        }
        if(head2){
            curr->next = head2;
            curr=curr->next;
            head2=head2->next;
        }
    }
    result = result->next;
    return result;
}
