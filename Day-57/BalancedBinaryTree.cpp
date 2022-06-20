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
  bool isbalanced = true;

int height(TreeNode* root)
{
    if (root == NULL)
    {
        return 0;
    }

    int lh = height(root->left);
    int rh = height(root->right);

    int gap = abs(lh - rh);
    if (gap > 1)
    {
        isbalanced = false;
    }

    int th = max(lh, rh) + 1;
    return th;
}
    bool isBalanced(TreeNode* root) {
         int r = height(root);
    if (isbalanced == 1)
        return  true;
    else
        return false;

    }
};