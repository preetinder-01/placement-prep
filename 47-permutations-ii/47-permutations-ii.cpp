class Solution {
public:
    set<vector<int>> s;
    void solve(vector<int>&nums,int index)
    {
        //sort(nums.begin(),nums.end());
        if(index==nums.size())
        {
            s.insert(nums);
            return;
        }
        for(int i=index;i<nums.size();i++)
        {
            swap(nums[i],nums[index]);
            solve(nums,index+1);
            swap(nums[i],nums[index]);
        }
        return;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        //sort(nums.begin(),nums.end());
        solve(nums,0);
        vector<vector<int>> ans(s.begin(),s.end());
        // for(auto i:s)
        // {
        //     ans.push_back(i);
        // }
        return ans;
    }
};