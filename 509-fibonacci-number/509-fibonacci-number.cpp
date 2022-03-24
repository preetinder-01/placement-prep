class Solution {
public:
    int dp[31]={-1};
    int fib(int n) {
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<31;i++)
        {
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};\


/* can be space optimized also 
by using a,b,c instead of array 
a=0,b=1,c,i;
for i=2:n-1
c=a+b
a=b
b=c
return b;*/