class Solution 
{
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {        
        int n = nums.size();
        if(n == 3)
            return accumulate(nums.begin(), nums.end(), 0);
        map <int, int> mp;
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-2; i++) {
            int j = i+1;
            int k = n-1;
            while(j < k) {
                if(nums[i]+nums[j]+nums[k] < target) {
                    int dif = target - (nums[i]+nums[j]+nums[k]);
                    mp[dif] = nums[i]+nums[j]+nums[k];
                    j++;
                }
                else if(nums[i]+nums[j]+nums[k] > target) {
                    int dif = (nums[i]+nums[j]+nums[k]) - target;
                    mp[dif] = nums[i]+nums[j]+nums[k];
                    k--;
                }
                else
                    return (nums[i]+nums[j]+nums[k]);
            }
        }
        auto it = mp.begin();
        return it->second;
    }
};