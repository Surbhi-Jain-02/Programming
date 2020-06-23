// Given a binary tree, return the zigzag level order traversal of its nodes’ values. (ie, from left to right, then right to left for the next level and alternate between).

// Example :
// Given binary tree

//     3
//    / \
//   9  20
//     /  \
//    15   7
// return

// [
//          [3],
//          [20, 9],
//          [15, 7]
// ]

/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::zigzagLevelOrder(TreeNode* A) {
   stack<TreeNode*> curr,next;
   curr.push(A);
   vector<vector<int>> res;
   vector<int> result;
   bool lefttoright=1;
   while(!curr.empty()){
       TreeNode* temp = curr.top();
       curr.pop();
       if(temp!=NULL){
           result.push_back(temp->val);
           if(lefttoright){
               if(temp->left){
                  next.push(temp->left);
               }
                if(temp->right){
                 next.push(temp->right); 
                }
                    
           }
           else{
               if(temp->right){
                   next.push(temp->right);
               }
                if(temp->left){
                    next.push(temp->left);
                }
           }
       }
       if(curr.empty()){
           lefttoright = !lefttoright;
           res.push_back(result);
           result.clear();
           swap(curr,next);
       }
   }
    
    return res;
}
