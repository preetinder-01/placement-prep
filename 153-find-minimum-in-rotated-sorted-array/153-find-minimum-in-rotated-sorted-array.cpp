class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0;
        int end=nums.size()-1;
        // int mid=0;
        int mid=(start+end)/2;
        while(start<end)
        {
            
            // int next=(mid+1)%nums.size();
            // int prev=(mid+nums.size()-1)%nums.size();
            // if(nums[next]>nums[mid] and nums[mid]<nums[prev])
            // {
            //     return nums[mid];
            // }
            if(nums[0]<nums[end])
                return nums[0];
            if(nums[0]<=nums[mid])
            {
                start=mid+1;
            }
            else
            {
                end=mid;
            }
            mid=(start+end)/2;
        }
            return nums[start] ;
    }
};