class Solution {
public:
    int roman(char c)
    {
        if(c=='I')
            return 1;
        if(c=='V')
            return 5;
        if(c=='X')
            return 10;
        if(c=='L')
            return 50;
        if(c=='C')
            return 100;
        if(c=='D')
            return 500;
        if(c=='M')
            return 1000;
        
        return -1;
        
    }
    
    int romanToInt(string s) {
     int n=s.length();
        int ans=0;
        int s1,s2=0;
        
        for(int i=0;i<n;i++)
        {
           s1=roman(s[i]);
            if(i+1<n)
            {
                s2=roman(s[i+1]);
                if(s1>=s2)
                {
                    ans=ans+s1;
                }
                else
                {ans=ans+s2-s1;    i++;}
            }
            else
                ans=ans+s1;
        }
        return ans;
    }
};