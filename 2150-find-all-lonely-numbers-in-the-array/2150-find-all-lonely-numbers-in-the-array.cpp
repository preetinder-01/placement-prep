// class Solution {
// public:
//     vector<int> findLonely(vector<int>& nums) {
//         map<int,int>m;
//         int n=nums.size();
//         for(int i=0;i<n;i++)
//         {
//             m[nums[i]]++;
//         }
//         vector<int>ans;
//         for(int i=0;i<n;i++)
//         {
//             if(m[nums[i]]==1 && m[nums[i]-1]==0 && m[nums[i]+1]==0)
//                 ans.push_back(nums[i]);
//         }
//         return ans;
//     }
// };

class Solution {
public:
    vector<int> findLonely(vector<int>& nums) {
        
        vector<int> ans;
        unordered_map<int,int> mp;
        
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++; //storing in map with frequency
        }
        
        for(auto it:mp)
        {
            if(it.second==1)  //frequency must be 1
            {
                int x=it.first-1;  
                int y=it.first+1;
                
                if(mp.find(x)==mp.end() && mp.find(y)==mp.end())
                {
               
                    ans.push_back(it.first);
                }
            }
        }
        
        return ans;
        
    }
};