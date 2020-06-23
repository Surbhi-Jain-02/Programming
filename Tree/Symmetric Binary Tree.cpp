/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
 
int isMirror(TreeNode *A,TreeNode *B){
    if(A==NULL && B==NULL)
        return 1;
    if(A==NULL)
        return 0;
    if(B==NULL)
        return 0;
    if(A->val == B->val && isMirror(A->left,B->right) && isMirror(A->right, B->left))
        return 1;
    return 0;
}
int Solution::isSymmetric(TreeNode* A) {
    return isMirror(A,A);
}
