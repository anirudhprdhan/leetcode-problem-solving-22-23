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
    string bet="->";
    void path(TreeNode* root, vector<string> &ans, string ins)
    {
        if(!root->left && !root->right)
        {
            ans.push_back(ins+to_string(root->val));
            return;
        }

        ins=ins+to_string(root->val)+bet;

        if(root->right)
            path(root->right,ans,ins);
        if(root->left)
            path(root->left,ans,ins);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        path(root,ans,"");
        return ans;
    }
};