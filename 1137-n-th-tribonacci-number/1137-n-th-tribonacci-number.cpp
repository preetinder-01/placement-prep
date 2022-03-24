class Solution {
public:
    int tribonacci(int n) {
        int f[38];
        f[0]=0;
        f[1]=f[2]=1;
        for(int i=0;i+3<=n;i++)
        {
            f[i+3]=f[i]+f[i+1]+f[i+2];
        }
        return f[n];
    }
};