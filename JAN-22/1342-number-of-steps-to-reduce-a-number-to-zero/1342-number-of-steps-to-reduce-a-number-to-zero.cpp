class Solution {
public:
    int numberOfSteps(int num) {
        if(num==0)
            return 0;
        int count=0;
        while(num>1)
        {
            if(num%2==0)
            { count++;
                 num=num/2;}
            else
            {
                count+=2;
                num-=1;
                num/=2;
            }
        }
        count++;
        return count;
    }
};