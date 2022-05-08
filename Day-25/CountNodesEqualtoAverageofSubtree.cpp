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
    pair<int, int> depthsearch(TreeNode* node, int& ans) {
        if (!node) return {0, 0};
        auto left = depthsearch(node->left, ans);
        auto right = depthsearch(node->right, ans);
        int sub = left.first + right.first + node->val, total = left.second + right.second + 1;
        if (sub / total == node->val) ans++;
        return {sub, total};
    } 
    
public:
    int averageOfSubtree(TreeNode* root) {
        int ans = 0;
        depthsearch(root, ans);
        return ans;
    }
   

};

