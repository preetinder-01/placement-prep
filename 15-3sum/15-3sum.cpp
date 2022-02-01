class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
         int l,r;
    vector<vector<int>>ans;
    vector<int>vec;
    if(nums.size()<3)
        return ans;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-2;i++)
    {
        if(i==0 || ((i>0) && nums[i]!=nums[i-1]))
        {
            l=i+1;
            r=nums.size()-1;
            int sum=0-(nums[i]);
            while(l<r)
            {
                if(nums[l]+nums[r]==sum)
                {
                    vec.push_back(nums[i]);
                    vec.push_back(nums[l]);
                    vec.push_back(nums[r]);
                    ans.push_back(vec);

                    while(l<r && nums[l]==vec[1])
                        l++;
                    while(l<r && nums[r]==vec[2])
                        r--;
                    vec.clear();
                }
                else if(nums[l]+nums[r]<sum)
                    l++;
                else
                    r--;
            }
        }
    }
    return ans;
    }
};