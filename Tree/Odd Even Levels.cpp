// Odd and Even Levels
// Problem Description

// Given a binary tree of integers. Find the difference between the sum of nodes at odd level and sum of nodes at even level.

// NOTE: Consider the level of root node as 1.



// Problem Constraints
// 1 <= Number of nodes in binary tree <= 100000

// 0 <= node values <= 109



// Input Format
// First and only argument is a root node of the binary tree, A



// Output Format
// Return an integer denoting the difference between the sum of nodes at odd level and sum of nodes at even level.



// Example Input
// Input 1:

//         1
//       /   \
//      2     3
//     / \   / \
//    4   5 6   7
//   /
//  8 
// Input 2:

//         1
//        / \
//       2   10
//        \
//         4


// Example Output
// Output 1:

//  10
// Output 2:

//  -7

int Solution::solve(TreeNode* A) {
    stack<TreeNode*> curr;
    stack<TreeNode*> next;
    TreeNode *temp=NULL;
    curr.push(A);
    int i=1;
    int even=0;int odd=0;
    while(!curr.empty()){
        temp=curr.top();
        curr.pop();
        if(temp){
            if(i%2==0)
                even = even+temp->val;
            else
                odd = odd+temp->val;
            if(temp->left)
                next.push(temp->left);
            if(temp->right)
                next.push(temp->right);
        if(curr.empty()){
            i++;
            swap(next,curr);
        }
        }
    }
    return odd-even;
}
