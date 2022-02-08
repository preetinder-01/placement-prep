class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        
        int left=0,right,countone=0,countzero=0,max=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                countzero++;
            else
                countone++;
        }
        left=0;
        right=countone;
        vector<int> ans;
        max=left+right;
        ans.push_back(0);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
                left++;
            else
                right--;
            
            int currAns=left+right;
            if(currAns>max)
            {
                ans.clear();
                max=currAns;
                ans.push_back(i+1);
            }
            else if(currAns==max)
            {
                ans.push_back(i+1);
            }
            
            
        }
        return ans;
    }
};