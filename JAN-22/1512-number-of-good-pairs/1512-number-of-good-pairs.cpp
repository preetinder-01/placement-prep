class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // map<int,int>m;
        // int res=0;
        // for(auto i:nums)
        // {
        //     res+=m[i]++;
        // }
        // return res;
        unordered_map<int, int> m;  // To store occurance
        int pairs = 0;  // Required value
        for(int i : nums)   m[i]++;  // All the occurances are counted
        for(auto i : m) {
            int n = i.second;  // Pairs are given by combination of equal nums
            pairs += (n*(n-1)/2);  // Pair of 2 is given by nC2;
        }
        return pairs;
    }
};