class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int l=0,r=n-1;
        int result=0;
        while(l<r)
        {
            int currarea=min(height[l],height[r])*(r-l);
            result=max(result,currarea);
            if(height[l]<height[r])
            {
                l++;
            }
            else
                r--;
        }
        return result;
    }
};