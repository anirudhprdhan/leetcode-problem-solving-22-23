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
    vector<int> ans;
    void trav(TreeNode * root)
    {
        if(!root)   return;
        if(root->left)
            trav(root->left);
        ans.push_back(root->val);
        if(root->right)
            trav(root->right);
        return;
    }
    vector<int> inorderTraversal(TreeNode* root) {
        trav(root);
        return ans;
    }
};