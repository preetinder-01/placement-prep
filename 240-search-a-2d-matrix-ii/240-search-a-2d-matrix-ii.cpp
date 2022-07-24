class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // brute force approach gives TLE
        
        //as rows ascending and columns also ascending so we can start checking from right top corner and apply conditions 
        
        int m=matrix.size();
        int n=matrix[0].size();
        int i=0,j=n-1;
        while(i<m and j>=0)
        {
            if(matrix[i][j]==target)
                return  true;
            if(matrix[i][j]>target)
                j--;
            else
                i++;
        }
        return false;
    }
};