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
		int findPos(vector<int> inorder,int element,int n){
		for(int i=0;i<n;i++){
			if(inorder[i] == element)
				return i;
		}
		return -1;
	}
	 TreeNode* solve(vector<int> postorder,vector<int> inorder,int &posstart , int instart,int inend , int n){
		if(posstart < 0 || instart > inend){
			return NULL;
		}

		int ele = postorder[posstart--];  
		TreeNode* root = new TreeNode(ele);  


		int pos = findPos(inorder , ele , n);

		//recursive call
		root->right = solve(postorder,inorder,posstart,pos+1,inend,n);
		 root->left = solve(postorder,inorder,posstart,instart,pos-1,n);
		return root;

	}
	TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
		 int n = inorder.size();
		int posInd = n-1;
		TreeNode *ans = solve(postorder,inorder,posInd,0,n-1,n); 
		return ans; 
	}
};