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
		bool findTarget(TreeNode* root, int k) {

		vector<int>traversal;
		inorderTraversal(root, traversal);

		//we will create two pointer
		int left = 0;
		int right = traversal.size()-1;

		while(left < right)
		{
			if(traversal[left] + traversal[right] == k)
				return true;

			else if(traversal[left] + traversal[right] > k)
				right--;

			else
				left++;

		}

		return false;
	}

	void inorderTraversal(TreeNode* root, vector<int>&traversal)
	{
		if(root == NULL)
			return;

		inorderTraversal(root->left, traversal);
		traversal.push_back(root->val);
		inorderTraversal(root->right, traversal);

	}
};