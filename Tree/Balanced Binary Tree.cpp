// Given a binary tree, determine if it is height-balanced.

//  Height-balanced binary tree : is defined as a binary tree in which the depth of the two subtrees of every node never differ by more than 1. 
// Return 0 / 1 ( 0 for false, 1 for true ) for this problem

// Example :

// Input : 
//           1
//          / \
//         2   3

// Return : True or 1 
/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 int height(TreeNode *A){
    if(A==NULL)
        return 0;
    return max(height(A->left),height(A->right))+1;
}

int Solution::isBalanced(TreeNode* A) {
    int lh=0,rh=0;
    if(A==NULL)
        return 1;
    lh = height(A->left);
    rh = height(A->right);
    if((abs(lh-rh)<=1) && isBalanced(A->left) && isBalanced(A->right)){
        return 1;
    }
    return 0;
}
