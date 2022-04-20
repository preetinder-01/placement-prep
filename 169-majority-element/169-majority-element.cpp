class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // int n=nums.size()/2;
        // map<int,int>m;
        // for(int i=0;i<nums.size();i++)
        // {
        //     m[nums[i]]++;
        // }
        // for(auto it:m)
        // {
        //     if(it.second>n)
        //         return it.first;
        // }
        // return n;
        
        int ansindex=0;
        int count=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]==nums[ansindex])
                count++;
            else
            {
                count--;
                if(count<=0)
                {
                    ansindex=i;
                    count=1;
                }
            }
        }
        return nums[ansindex];
    }
};