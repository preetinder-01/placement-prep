class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol;
        map<int,int> m;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            int abc=target-nums[i];
            if(m.find(abc)!=m.end())
            {
                auto p=m.find(abc);
                sol.push_back(p->second);
                sol.push_back(i);
                
                
            }
            m.insert(make_pair(nums[i],i));
        }
        return sol;
        
    }
};