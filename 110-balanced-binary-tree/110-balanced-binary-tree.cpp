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
    int maxDepth(TreeNode* root) {
        if(root==NULL)
        {
            return 0;
        }
        int leftside=maxDepth(root->left);
        if(leftside==-1)
            return -1;
        int rightside=maxDepth(root->right);
        if(rightside==-1)
            return -1;
        if(abs(leftside-rightside)>1)
            return -1;
        return max(leftside,rightside)+1;
        
    }
    
    bool isBalanced(TreeNode* root) {
         
        
        
        return maxDepth(root)!=-1;
        
    }
};