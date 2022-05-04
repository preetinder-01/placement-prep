class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        map<int,int> m;
        int count=0;
        for(auto x:nums)     // iterate the nums array 
        {
            if(m[k-x])  // if required int for elem present then decrease the target and 
            {           // elem in map 
                m[k-x]--; 
                m[x]--;
                count++;
            }
            m[x]++; // increase the count for elem if target not present yet 
            
        }
        return count;
    }
};