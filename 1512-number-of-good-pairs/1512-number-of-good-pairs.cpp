class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        map<int,int>m;
        int res=0;
        for(auto i:nums)
        {
            res+=m[i]++;
        }
        return res;
    }
};