/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL or root==p or root==q)    // base case 
            return root;
        TreeNode* left=lowestCommonAncestor(root->left,p,q);    // for left subtree
        TreeNode* right=lowestCommonAncestor(root->right,p,q);  // for right subtree
        //result
        if(left==NULL)return right;     // i fleft is NULL then return right one 
        if(right==NULL)return left;
        else    
            return root;        // both left and right are our targets
    }
};