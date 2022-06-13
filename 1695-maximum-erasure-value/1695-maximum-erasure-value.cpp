class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int l=0;int r=0;
        int curr_sum=0;
        int ans=0;
        int n=nums.size();
        unordered_map<int,int> hashmap;
        
        while(r<n)
        {
            int right=nums[r++];
            curr_sum+=right;
            hashmap[right]++;
            
            while(hashmap[right]>1)
            {
                int left=nums[l++];
                hashmap[left]--;
                curr_sum-=left;
            }
            ans=max(curr_sum,ans);
        }
        return ans;
    }
};