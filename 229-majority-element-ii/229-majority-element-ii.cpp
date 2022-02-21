class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       vector<int> sol;
        map<int,int>m;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            m[nums[i]]++;
        }
        for(auto it:m)
        {
            if(it.second>n/3)
            {
                sol.push_back(it.first);
            }
        }
        return sol;
    }
};