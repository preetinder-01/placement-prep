class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> ans;
        int sum=0,result=0;
        for(auto i:accounts)
        {
            sum=0;
            for(auto j:i)
            {
               
                sum+=j;
                
            }
            result=max(result,sum);
        }
        return result;
    }
};