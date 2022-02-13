class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return;
        int i=1,lastpeak=-1;
        while(i<n)
        {
            if(nums[i]>nums[i-1])
            {
                lastpeak=i;
            }
            i++;
        }
        
        //if arr DSC
        if(lastpeak==-1)
        {
            for(int i=0;i<n/2;++i)
                swap(nums[i],nums[n-i-1]);
            return;
        }
        
        // now check for peak swap
        int index=lastpeak;
        for(i=lastpeak;i<n;++i)
        {
            if(nums[lastpeak-1]<nums[i] && nums[index]>nums[i])
            {
                index=i;
            }
        }
        swap(nums[lastpeak-1],nums[index]);
        sort(nums.begin()+lastpeak,nums.end());
    }
};