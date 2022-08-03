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
    bool helper(TreeNode* root,int currsum,int targetSum)
    {
        if(!root)
            return false;
        currsum+=root->val;
        if(!root->left and !root->right)
            return currsum==targetSum;
        return helper(root->left,currsum,targetSum) or helper(root->right,currsum,targetSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        int currsum=0;
        return helper(root,currsum,targetSum);
    }
};