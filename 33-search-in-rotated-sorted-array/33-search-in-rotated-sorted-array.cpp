class Solution {
public:
    int search(vector<int>& nums, int target) {
        // for(int i=0;i<nums.size();i++)
        // {
        //     if(nums[i]==target)
        //         return i;
        // }
        // return -1;
        
        //BINARY SEARCH
        int start=0,end=nums.size()-1;
        while(start<=end)
        {
            int mid=start+(end-start)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[mid]>=nums[start])
                {
                if(nums[mid]>target && nums[start]<=target)
                {
                    end=mid-1;
                }
                else
                    start=mid+1;
                }
           else
           {
               if(nums[mid]<target && target<=nums[end])
               {
                   start=mid+1;
               }
               else
                   end=mid-1;
           }
        }
        return -1;
    }
};