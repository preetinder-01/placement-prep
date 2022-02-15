class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            
        }
        for(auto z:m)
        {
            if(z.second==1)
            {
                return z.first;
            }
            
        }
        return -1;
    }
    
};