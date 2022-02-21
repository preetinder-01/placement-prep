class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2;
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        for(auto it:m)
        {
            if(it.second>n)
                return it.first;
        }
        return n;
    }
};