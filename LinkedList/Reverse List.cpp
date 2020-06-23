// Reverse a linked list from position m to n. Do it in-place and in one-pass.

// For example:
// Given 1->2->3->4->5->NULL, m = 2 and n = 4,

// return 1->4->3->2->5->NULL.
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
    ListNode *prev=NULL;
    while(curr!=NULL){
        ListNode *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
    
}
ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    ListNode *revs=NULL,*revs_start=NULL,*revs_end=NULL,*revs_end_next=NULL;
    ListNode *curr=A;
    if(B==C)
        return A;
    int count=1;
    while(curr && count<=C){
        if(count<B)
            revs_start = curr;
        else if(count==B)
            revs=curr;
        else if(count == C){
            revs_end = curr;
            revs_end_next = curr->next;
        }
        count++;
        curr=curr->next;
    }
    revs_end->next =NULL;
    revs_end = reverse(revs);
    if(revs_start)
        revs_start->next = revs_end;
    else
        A = revs_end;
    revs->next = revs_end_next;
    return A;
}
