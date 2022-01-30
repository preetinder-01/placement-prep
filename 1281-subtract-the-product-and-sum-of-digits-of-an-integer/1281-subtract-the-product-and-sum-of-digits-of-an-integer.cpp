class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0,product=1;
        int digit=0;
        while(n!=0)
        {
            digit=n%10;
            n=n/10;
            sum+=digit;
            product*=digit;
        }
        return product-sum;
    }
};