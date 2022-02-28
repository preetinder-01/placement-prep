class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>nums;
    nums.insert(nums.end(),nums1.begin(),nums1.begin()+m);
        nums.insert(nums.end(),nums2.begin(),nums2.begin()+n);
        nums1.clear();
        
        sort(nums.begin(),nums.end());nums1.insert(nums1.end(),nums.begin(),nums.end());
    }
};