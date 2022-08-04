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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int,map<int,multiset<int>>> nodes;  // map to store values while traversal vertical,level=node->val
        queue<pair<TreeNode* ,pair<int,int>>> q;    // queue to store nodes while traversal node,vertical,level 
        q.push({root,{0,0}});
        while(!q.empty())   // preorder traversal
        {
            auto it=q.front();
            q.pop();
            TreeNode* node=it.first;
            int x=it.second.first,y=it.second.second;
            nodes[x][y].insert(node -> val);
            if(node->left)
            {
                q.push({node->left,{x-1,y+1}});
            }
            if(node->right)
            {
                q.push({node->right,{x+1,y+1}});
            }
        }
        vector<vector<int>>ans;
        for(auto it:nodes)  // for verticals 
        {   // for remaining nodes 
            vector<int>col;
            for(auto q: it.second)  // for levels 
                col.insert(col.end(),q.second.begin(),q.second.end());  // insert values i.e. sets 
            ans.push_back(col);
            
        }
        return ans;
    }
};