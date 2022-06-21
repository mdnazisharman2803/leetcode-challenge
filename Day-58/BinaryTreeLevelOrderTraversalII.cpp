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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root)  return {};      
        queue<TreeNode*> mainq;
        mainq.push(root);
           vector<vector<int>> res;
    while (mainq.size() > 0)
    {   vector<int> level;
        int count = mainq.size();
        for (int i = 0; i < count; i++)
        {
            root = mainq.front();
            mainq.pop();
          
            level.push_back(root->val);

            if (root->left != NULL)
            {
                mainq.push(root->left);
            }
            if (root->right != NULL)
            {
                mainq.push(root->right);
                
            }
                  
        }
        
        res.push_back(level);

    }
        reverse(res.begin(),res.end());
     return res;
    }
    };