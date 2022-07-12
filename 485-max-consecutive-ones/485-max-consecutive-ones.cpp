class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx=0;
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            while(i<nums.size() and nums[i]==1)
            {
                count++;
                mx=max(mx,count);
                i++;
            }
            count=0;
        }
        return mx;
    }
};