class Solution {
public:
    int memo[51][51][51];
        int mod=1e9+7;
     long int helper(int m,int n,int maxmove,int i,int j)
     {
         if(i>=m or i<0 or j>=n or j<0)
             return 1;
         if(maxmove<=0)
             return 0;
         if(memo[i][j][maxmove] !=-1)
             return memo[i][j][maxmove];
         long res=0;
         
         res+=helper(m,n,maxmove-1,i+1,j);
         res+=helper(m,n,maxmove-1,i-1,j);
         res+=helper(m,n,maxmove-1,i,j+1);
         res+=helper(m,n,maxmove-1,i,j-1);
         return memo[i][j][maxmove]=res%mod;
     }
    
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        /*
        for each position we have four option up down left right 
        but we have constraint on max moves so taking in account max moves we call dfs in all 4 directions 
        whenever we reach outisde the box return 1 
        apply memoization as there is case of repetitive problems 
        */
        memset(memo,-1,sizeof(memo));
        return helper(m,n,maxMove,startRow,startColumn)%mod;
    }
};