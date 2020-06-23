// Given a linked list, swap every two adjacent nodes and return its head.

// For example,
// Given 1->2->3->4, you should return the list as 2->1->4->3.

// Your algorithm should use only constant space. You may not modify the values in the list, only nodes itself can be changed.
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    ListNode *curr=A;
    ListNode* prev = NULL;
    ListNode* next = NULL;
    int count =0;
    while(curr!=NULL && count<2){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr=next;
        count++;
    }
    if(next){
        A->next = swapPairs(next);
    }
    return prev;
}
