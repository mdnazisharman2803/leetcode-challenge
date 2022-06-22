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
     int ans = 0;
    int helper(TreeNode *root){
         if(root == NULL) return 0;
        
        int leftAns = helper(root->left);       // call on left subtree
        int rightAns = helper(root->right);     // call on right subtree
        
        ans += abs(leftAns - rightAns);
        
        return (root->val + leftAns + rightAns);
    }
    int findTilt(TreeNode* root) {
         helper(root);
        return ans;
    }
};