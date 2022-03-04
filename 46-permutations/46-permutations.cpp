class Solution {
public:
    vector<vector<int>> ans;
    void solve(vector<int> &nums,int index)
    {
        //base cae
        if(index==nums.size())
        {ans.push_back(nums);return;}
        for(int i=index;i<nums.size();i++)
        {
            swap(nums[i],nums[index]);  // swapping with elements to the right 
            solve(nums,index+1);
            swap(nums[i],nums[index]);  // swapping back to turn it back to original 
        }
        return ;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        solve(nums,0);
        return ans;
    }
};