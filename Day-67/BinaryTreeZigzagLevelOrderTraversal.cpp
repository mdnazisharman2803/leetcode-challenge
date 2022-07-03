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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector <vector<int>> v;
        if(!root) 
            return v;
        queue <TreeNode*> q;
        q.push(root);
        int count = 1; 
        while(!q.empty())
        {
            int n = q.size();
            vector <int> l;
            
            while(n--)
            {
                root=q.front();
                q.pop();
                l.push_back(root->val);
                if(root->left)
                    q.push(root->left);
                if(root->right)
                    q.push(root->right);
            }
            if(count%2==0) // 
                reverse(l.begin(),l.end());
            v.push_back(l);
            count++;
        }
        
        return v;
    }
};