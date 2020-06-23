// Given a linked list, return the node where the cycle begins. If there is no cycle, return null.

// Try solving it using constant additional space.

// Example :

// Input : 

//                   ______
//                  |     |
//                  \/    |
//         1 -> 2 -> 3 -> 4

// Return the node corresponding to node 3. 

ListNode* Solution::detectCycle(ListNode* A) {
   if(A == NULL || A->next == NULL){
        return NULL;
    }
    
    ListNode* slow = A;
    ListNode* fast = A;
    
    while(slow != NULL && fast != NULL){
        slow = slow->next;
        if(fast->next == NULL){
            return NULL;
        }
        else{
            fast = (fast->next)->next;
        }
        if(slow == fast){
            break;
        }
    }
    
    if(slow == NULL || fast == NULL){
        return NULL;
    }
    
    ListNode* curr = A;
    while(curr != slow){
        curr = curr->next;
        slow = slow->next;
    }
    
    return curr;
}
