class Solution {
public:
    vector<vector<int>> ans;
    
    void solve(int i,vector<int>& temp,vector<int>&arr,int target)
    {
        if(target==0)
        {
            ans.push_back(temp);
            return;
        }
        if(target<0)
            return;
        if(i==arr.size())
            return;
        // not includeing ith elem so no change in target
        solve(i+1,temp,arr,target);
        temp.push_back(arr[i]);
        // includeing ith elm in cominations so decrease target
        solve(i,temp,arr,target-arr[i]);
        temp.pop_back();    //backtrack
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
                vector<int>temp;
        solve(0,temp,candidates,target);
        return ans;
    }
};