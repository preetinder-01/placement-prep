class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int result=INT_MAX;
        int left=0;
        int curr_sum=0;
        for(int i=0;i<n;i++)
        {
            curr_sum+=nums[i];
            while(curr_sum>=target)
            {
                result=min(result,i+1-left);
                curr_sum-=nums[left];
                left++;
            }
        }
        return (result!=INT_MAX)? result:0;
    }
};