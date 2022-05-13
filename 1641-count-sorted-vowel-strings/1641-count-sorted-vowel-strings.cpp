class Solution {
public:
    int countStrings(int n,int start)
    {
        if(n==0)
        {
            return 1;
            
        }
        int cnt=0;
        for(int i=start;i<5;i++)
        {
            cnt+=countStrings(n-1,i);
        }
        return  cnt;
    }
    
    int countVowelStrings(int n) {
        return countStrings(n,0);
    }
};