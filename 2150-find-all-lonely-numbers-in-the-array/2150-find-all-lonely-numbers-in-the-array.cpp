class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            if(m[nums[i]]==1 && m[nums[i]-1]==0 && m[nums[i]+1]==0)
                ans.push_back(nums[i]);
        }
        return ans;
    }
};