class Solution {
public:
    // int countpaths(int i,int j,int m,int n,vector<vector<int>>&dp)
    // {
    //     if(i==m-1 and j==n-1)return 1;
    //     if(i>=m or j>=n)return 0;
    //     if(dp[i][j]!=-1)return dp[i][j]; 
    //     else 
    //          return dp[i][j]=countpaths(i+1,j,m,n,dp)+countpaths(i,j+1,m,n,dp);   
    // }
    int uniquePaths(int m, int n) {
        // vector<vector<int>>dp(m,vector<int>(n,-1));
        // return countpaths(0,0,m,n,dp);
    
    int tot=n+m-2;
    int col=n-1;
    double ans=1;
    for(int i=1;i<=col;i++)
    {
        ans=ans*(tot-col+i)/i;
    }
    return ans;}
};