/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

  int height(TreeNode* root){
      if(root == NULL){
          return 0;
      }

      int leftheight = height(root->left);
      int rightheight = height(root->right);

      int ans = max(leftheight , rightheight) + 1;

      return ans;
  }


    bool isBalanced(TreeNode* root) {
        // base case
        if(root == NULL){
            return true;
        }
        
        // case 1
        int leftheight = height(root->left);
        int rightheight = height(root->right);

        int difference = abs(leftheight - rightheight);
        bool ans = (difference <= 1);

        // we are now using recursion to solve all the test case

        bool leftans = isBalanced(root->left);
        bool rightans = isBalanced(root->right);

        if(ans && leftans && rightans){
            return true;
        }
        else{
            return false;
        }
    }

};
