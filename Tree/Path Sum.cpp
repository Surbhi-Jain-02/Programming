// Given a binary tree and a sum, determine if the tree has a root-to-leaf path such that adding up all the values along the path equals the given sum.

// Example :

// Given the below binary tree and sum = 22,

//               5
//              / \
//             4   8
//            /   / \
//           11  13  4
//          /  \      \
//         7    2      1
// return true, as there exist a root-to-leaf path 5->4->11->2 which sum is 22.
int result(TreeNode* A,int B){
    int ans =0;
    if(A==NULL)
        return B==0;
    int subSum = B-A->val;
    if(subSum==0 && A->left==NULL && A->right==NULL)
        return 1;
    if(A->left)
        ans = ans || result(A->left,subSum);
    if(A->right)
        ans = ans || result(A->right,subSum);
    return ans;
    
} 
 
int Solution::hasPathSum(TreeNode* A, int B) {
    int sum =0;
    return result(A,B);
}