class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> backelem;
        if(k<nums.size()){
            for(int i=0;i<k;i++)
                {
                    backelem.push_back(nums.back());
                    nums.pop_back();

                }
            // backelem.append
            reverse(backelem.begin(),backelem.end());
            nums.insert(nums.begin(),backelem.begin(),backelem.end());
            return ;
        }
        
        for(int i=0;i<k;i++)
        {
            nums.insert(nums.begin(),nums.back());
            nums.pop_back();
        }
    }
};