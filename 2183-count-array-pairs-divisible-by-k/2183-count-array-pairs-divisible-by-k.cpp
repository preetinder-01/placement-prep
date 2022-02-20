class Solution {
public:
    long long countPairs(vector<int>& nums, int k) {
        //store all gcd in m
        unordered_map<int,int> m;
        long long sol=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            int gcd1=__gcd(nums[i],k);
            int gcd2=k/gcd1;
            // if gcd itself gets divisible by k
            // then no matter what you mulitply it iwll always be divisible by k
            if(gcd2==1)
                sol+=i;
            // if i am looking for missing gcd2 i can take any gcd that has gcd2 
            //int it 
            else
            {
                for(auto it:m)
                {
                    if(it.first %gcd2==0)
                        sol+=it.second;
                }
            }
            m[gcd1]++;
        }
        return sol;
    }
};