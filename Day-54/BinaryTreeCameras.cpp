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
   int camera=0;
    
    int minCamera(TreeNode*root){
        
        if(!root)return 1;
        
        int leftc=minCamera(root->left);
        int rightc=minCamera(root->right);
        
        if(leftc==-1 || rightc==-1){
            camera++;
            return 0;
        }
        
        if(leftc==0 || rightc==0) return 1;
        
        return -1;
    }
    
    int minCameraCover(TreeNode* root) {
        
        if(minCamera(root)==-1)camera++;
        
        return camera;
        
    }
};