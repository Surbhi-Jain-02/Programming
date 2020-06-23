// Given a list, rotate the list to the right by k places, where k is non-negative.

// For example:

// Given 1->2->3->4->5->NULL and k = 2,
// return 4->5->1->2->3->NULL.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::rotateRight(ListNode* A, int B) {
    ListNode *curr = A;
    int count =1;
    ListNode *temp = A;
    int len =0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    B = B%len;
    while(curr!=NULL && count<(len-B)){
        count++;
        curr=curr->next;
    }
    if(curr==NULL)
        return A;
    ListNode *kNode = curr;
    while(curr->next!=NULL)
        curr=curr->next;
    curr->next = A;
    A = kNode->next;
    kNode->next =NULL;
    return A;
}
