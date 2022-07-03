class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        
        if(nums.size()<2)
            return nums.size();
        int prev=nums[1]-nums[0];
        int count=prev!=0?2:1;
        int diff=0;
        for(int i=2;i<nums.size();i++)
        {
            diff=nums[i]-nums[i-1];
            if((prev<=0 and diff>0) or (prev>=0 and diff<0))
            {
                count++;
                prev=diff;
            }
        }
        return count;
    }
};