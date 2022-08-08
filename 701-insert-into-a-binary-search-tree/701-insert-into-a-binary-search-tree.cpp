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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        
        TreeNode* newnode=new TreeNode(val);
        if(root==NULL)return newnode;
        TreeNode* node=root;
        while(true)
        {
            if(val<node->val)
            {
                if(!node->left)
                {
                    node->left=newnode;
                    break;
                }
                node=node->left;
            }
            else
            {
                if(!node->right)
                {
                    node->right=newnode;
                    break;
                }
                node=node->right;
            }
        }
     return root;   
    }
};