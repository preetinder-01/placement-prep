class Solution {
public:
    int countOrders(int n) {
     long mod=1e9+7;
        long sol=1;
        for(int j=1;j<n+1;j++)
        {
            sol*=j;
            // if(j%2!=0)
            sol%=mod;
            sol*=(2*j)-1;
            sol%=mod;
        }
        // for(int j=1;j<n)
        return sol%mod;
    }
};