class Solution {
public:
    
    int merge(vector<int>&nums,int low,int mid,int high)
    {
        int res = 0;

        int j = mid+1;
        for(int i=low;i<=mid;i++){
            while(j<=high && nums[i] > 2LL * nums[j]){
                j++;
            }
            res += (j-(mid+1));
        }

        vector<int> temp;

        int left = low, right = mid+1;

        while(left <= mid && right <= high){

            if(nums[left] <= nums[right]){
                temp.push_back(nums[left++]);
            }else{
                temp.push_back(nums[right++]);
            }
        }

        while(left <= mid){
            temp.push_back(nums[left++]);
        }

        while(right <= high){
            temp.push_back(nums[right++]);
        }

        for(int i=low;i<=high;i++){
            nums[i] = temp[i-low];
        }
        return res;
    }
    
    int mergesort(vector<int>& nums,int s,int e)
    {
        if(s>=e)return 0;
        int m=(s+e)/2;
        int count=mergesort(nums,s,m);
        count+=mergesort(nums,m+1,e);
        count+=merge(nums,s,m,e);
        return count;
    }
    
    
    int reversePairs(vector<int>& nums) {
        return mergesort(nums,0,nums.size()-1);
    }
};