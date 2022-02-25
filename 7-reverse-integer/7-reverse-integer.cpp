class Solution {
public:
    int reverse(int x) {
     
     long int num=0;
        while(x)
        {
            int rem=x%10;
            num=num*10+rem;
            x=x/10;
        }
        if(num>(pow(2,31)-1) or num<(-1*pow(2,31)))   
         return 0;
        return num;
    }
};