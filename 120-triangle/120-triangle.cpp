class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<int>sol(triangle.back());
        for(int i=n-2;i>=0;i--) // start from second last row 
        {
            for(int j=0;j<=i;j++)   // in that row start from first index 
            {
                sol[j]=min(sol[j],sol[j+1])+triangle[i][j]; // min of both possible elements of next row  summing with the                                                                 triangle element 
            }
           
        }
         return sol[0];
    }
};