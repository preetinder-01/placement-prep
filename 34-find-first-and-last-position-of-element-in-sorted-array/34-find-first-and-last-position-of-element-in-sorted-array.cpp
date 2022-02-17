class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
                ans.push_back(i);
        }
        vector<int> sol;
        if(ans.size()==0)
        {
            sol.push_back(-1);
            sol.push_back(-1);
            return sol;
        }
        if(ans.size()==1)
        {
            sol.push_back(ans[0]);
            sol.push_back(ans[0]);
            return sol;
        }
        sol.push_back(ans[0]);
        if(ans.size()>=2)
            sol.push_back(*(ans.end()-1));
        else
            sol.push_back(-1);
        return sol;
        
    }
};