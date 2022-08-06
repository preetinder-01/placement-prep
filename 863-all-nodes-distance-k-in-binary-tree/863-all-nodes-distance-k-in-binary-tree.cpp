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
    void track_parent(TreeNode* root,unordered_map<TreeNode*,TreeNode*>& parent,TreeNode*  target)
    {
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode* node=q.front();
            q.pop();
            if(node->left)
            {
                parent[node->left]=node;
                q.push(node->left);
            }
            if(node->right)
            {
                parent[node->right]=node;
                q.push(node->right);
            }
        }
        
    }
    
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        unordered_map<TreeNode*,TreeNode* >parent;
        track_parent(root,parent,target);
        
        unordered_map<TreeNode*,bool>visited;
        queue<TreeNode*>q;
        q.push(target);
        visited[target]=true;
        int dis=0;
        while(!q.empty())
        {
            int size=q.size();
            if(dis++ ==k)break;
            for(int i=0;i<size;i++)
            {
                TreeNode* node=q.front();
                q.pop();
                if(node->left and !visited[node->left])
                {
                    visited[node->left]=true;
                    q.push(node->left);
                    
                }
                if(node->right and !visited[node->right])
                {
                    visited[node->right]=true;
                    q.push(node->right);
                  }
                if(parent[node] and !visited[parent[node]])
                {
                    visited[parent[node]]=true;
                    q.push(parent[node]);
                }
            }
        }
        vector<int>result;
        while(!q.empty())
        {
            TreeNode*curr=q.front();
            q.pop();
            result.push_back(curr->val);
            
        }
        return result;
    }
};