class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        if(nums.size()<4) return ans;
        set<vector<int>>s;
        sort(nums.begin(),nums.end());
        int n=nums.size(),i=0;int j;
        for(i=0;i<n-1;i++)
        {
            for(j=i+1;j<n;j++)
            {
                int temp = target - nums[i]-nums[j], l = j+1, r = n-1;
                while(l < r){
                    if(nums[l]+nums[r] == temp) 
                        s.insert({nums[i], nums[j], nums[l], nums[r]}), l++, r--;
                    else if(nums[l]+nums[r] < temp) l++;
                    else r--;
                }
            }
        }
        ans.assign(s.begin(), s.end());
        return ans; 
    }
};