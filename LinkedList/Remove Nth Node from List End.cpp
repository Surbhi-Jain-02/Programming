// Given a linked list, remove the nth node from the end of list and return its head.

// For example,
// Given linked list: 1->2->3->4->5, and n = 2.
// After removing the second node from the end, the linked list becomes 1->2->3->5.

//  Note:
// If n is greater than the size of the list, remove the first node of the list.
// Try doing it using constant additional space.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode *first=A;
    ListNode *second = A;
    int i;
    for(i=0;i<B;i++){
        if(second->next==NULL){
            // if(i==B-1)
                A=A->next;
            return A;
        }
        second= second->next;
    }
    while(second->next!=NULL){
        first = first->next;
        second=second->next;
    }
    first->next = first->next->next;
    return A;
}
