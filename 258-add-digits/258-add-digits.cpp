class Solution {
public:
    int addDigits(int num) {
//         int sum=0;
//         while(num)
//         {
//             sum+=num%10;
//             num/=10;
            
//         }
//         if(sum<10)
//             return sum;
//         else
//             return addDigits(sum);
        
        
        //aproach 2
        if(num==0)
            return 0;
        if(num%9==0)
            return 9;
        else 
            return num%9;
       }
};