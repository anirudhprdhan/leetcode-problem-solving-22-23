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
    void insert(TreeNode* root, int val)
    {
        if(root && root->val >val)
        {
            if(!root->left)
            {
                TreeNode *neww = new TreeNode(val);
                root->left= neww;
            }
            else
                insert(root->left,val);
        }
        if(root && root->val < val)
        {
            if(!root->right)
            {
                TreeNode *neww = new TreeNode(val);
                root->right= neww;
            }
            else
                insert(root->right,val);
        }
        return;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root)
        {
            TreeNode * neww= new TreeNode(val);
            root=neww;
        }
        else
            insert(root,val);
        return root;
    }
};