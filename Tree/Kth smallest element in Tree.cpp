// Given a binary search tree, write a function to find the kth smallest element in the tree.

// Example :

// Input : 
//   2
//  / \
// 1   3

// and k = 2

// Return : 2

// As 2 is the second smallest element in the tree.

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
TreeNode* result(TreeNode* A,int &count,int k){
    if(A==NULL)
        return 0;
    TreeNode* left = result(A->left,count,k);
    if(left!=NULL)
        return left;
    count++;
    if(count==k)
        return A;
    TreeNode* right = result(A->right,count,k);
    return right;
}
int Solution::kthsmallest(TreeNode* A, int B) {
    int count =0;
    TreeNode* curr = result(A,count,B);
    return curr->val;
    
}
