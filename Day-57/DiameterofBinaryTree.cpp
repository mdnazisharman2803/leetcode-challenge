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

class diapair
{
public:
    int ht;
    int dia;

    diapair(int ht, int dia)
    {
        this->ht = ht;
        this->dia = dia;
    }
};
class Solution {
public:
    diapair *diameter2(TreeNode* root)
{

    if (root == NULL)
    {
        diapair *basepair = new diapair(-1, 0);

        return basepair;
    }

    diapair *lp = diameter2(root->left);
    diapair *rp = diameter2(root->right);

    int factor = lp->ht + rp->ht + 2;
    diapair *mypair = new diapair(max(lp->ht, rp->ht) + 1, max(factor, max(lp->dia, rp->dia)));

    return mypair;
}

    int diameterOfBinaryTree(TreeNode* root) {
        diapair *d = diameter2(root);
        return d->dia;
    }
};