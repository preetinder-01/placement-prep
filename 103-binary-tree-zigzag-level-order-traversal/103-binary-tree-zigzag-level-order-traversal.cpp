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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        queue<TreeNode* >q;
        vector<vector<int >> ans;
        if(root==NULL)return ans;
        q.push(root);
        bool lefttoright=true;     // 1 for left to right     and 0  for right to left 
        while(!q.empty())
        {
            int size=q.size();
            vector<int > res(size);
            for(int i=0;i<size;i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                
                // now check for placement left to right OR right to left 
                int index=(lefttoright) ? i:(size-1-i);
                res[index]=temp->val;
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
                
            }
            lefttoright=!lefttoright;
            ans.push_back(res);
        }
        return ans;
        
            
        
    }
};