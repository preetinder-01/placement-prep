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
    vector<string> ans;
    void helper(TreeNode* root,string s)
    {
        if(root==NULL)
            return ;
        if(!root->left and !root->right)
        {
            s+=to_string(root->val);
            
            ans.push_back(s);
        }
        s+=to_string(root->val)+"->";
        helper(root->left,s);
        helper(root->right,s);
        return;
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        
        if(!root)return ans;
        string st="";
        helper(root,st);
        return ans;
        }
};