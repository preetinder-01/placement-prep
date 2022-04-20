class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        // BRUTE FORCE APPROACH 
        // o(LOGN)
        
        // vector<int> sol;
        // for(int i=0;i<nums.size();i++)
        // {
        //     sol.push_back(nums[i]*nums[i]);
        // }
        // sort(sol.begin(),sol.end());
        // return sol;
        
        
        // BETTER APPAROACH
        vector<int> res;
        int vali=0,valj=0;
        int i=0,j=nums.size()-1;
        int ind=j;
        while(i!=j)
        {
            vali=nums[i]*nums[i];
            valj=nums[j]*nums[j];
            if(vali<valj)
            {
                // res[ind]=valj;
                res.push_back(valj);
                j--;
                // ind--;
            }
            else
            {
                // res[ind]=vali;
                res.push_back(vali);
                i++;
                // ind--;
            }
        }
        // res[ind]=nums[j]*nums[j];
        res.push_back(nums[j]*nums[j]);
        reverse(res.begin(),res.end());
        return res;
    }
};