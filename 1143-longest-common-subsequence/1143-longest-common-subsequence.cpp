class Solution {
public:
    
    int helper(int i,int j,string &s,string &t,vector<vector<int>>&dp)
    {
        if(i<0 or j<0)
            return 0;
        
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(s[i]==t[j])
            return dp[i][j]= 1 + helper(i-1,j-1,s,t,dp);
        
        return dp[i][j]=max( helper(i-1,j,s,t,dp) , helper(i,j-1,s,t,dp) );
    }
    
    
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.size();
        int m=text2.size();
        
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return helper(n-1,m-1,text1,text2,dp);
    }
};

// IT WAS MEMOIZATION n*m
// SPACE n*m AND FOR STACK SPACE n+m
/* FOR SPACE OPTIMIZATION WE USE BOTTOM UP APPROACH TABULATION WITH ITERATIVE */

 