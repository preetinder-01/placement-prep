class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return 0;
       long int rev=0,mod=0,num=x;
        while(num!=0)
        {
            mod=num%10;
            rev=(rev*10)+mod;
            num=num/10;
            
        }
        // cout<<rev;
        if(x==rev)
            return 1;
        return 0;
    }
};