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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)return root;
        if(root->val==key)
        {
            return helper(root);
            
        }
        TreeNode* tr=root;
        while(root!=NULL)
        {
            if(root->val>key)
            {
                if(root->left!=NULL and root->left->val==key)
                {
                    root->left=helper(root->left);
                    break;
                    
                }
                else
                {
                    root=root->left;
                }
            }
            else
            {
                if(root->right!=NULL and root->right->val==key)
                {
                    root->right=helper(root->right);
                    break;
                    
                }
                else
                {
                    root=root->right;
                }
            }
        }
        
        return tr;
    }
    
    
    TreeNode* helper(TreeNode* root)
    {
        if(root->left==NULL)return root->right;
        else if (root->right==NULL)return root->left;

        
            // attaching right child to right of last right of that subtree as right subtree is greater than all elem of left subtree and can be attached to last right of left subtree 
            TreeNode* rightchild=root->right;
            TreeNode* lastright=getLast(root->left);
            lastright->right=rightchild;
        
        return root->left;
    }
    TreeNode* getLast(TreeNode* root)
    {
        if(root->right==NULL)
        return root;
        return getLast(root->right);
    }
};