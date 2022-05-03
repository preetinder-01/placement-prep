class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int low=0,high=nums.size()-1;
        while(low+1<nums.size() and nums[low]<=nums[low+1])low++;
        while(high-1>=0 and nums[high]>=nums[high-1])high--;
        
        if(low==nums.size()-1)return 0;
        int sub_min=INT_MAX,sub_max=INT_MIN;
        for(int i=low;i<=high;i++)
        {
            sub_min=min(sub_min,nums[i]);
            sub_max=max(sub_max,nums[i]);
        }
        while(low-1>=0 and nums[low-1]>sub_min)low--;
        while(high+1<=nums.size()-1 and nums[high+1]<sub_max)high++;
        
        return high-low+1;
    }
};