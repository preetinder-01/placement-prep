class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        // int max=INT_MIN;
        int sum1=0,sum2=0,ans1=INT_MIN,ans2=INT_MAX;
        for(auto i:nums)
        {
            sum1+=i;
            if(sum1<0)
                sum1=0;
            ans1=max(sum1,ans1);
        }
        for(auto i:nums)
        {
            sum2+=i;
            if(sum2>=0)
                sum2=0;
            ans2=min(ans2,sum2);
        }
        
        return max(ans1,abs(ans2)); 
    }
};