class Solution {
public:
    int balancedStringSplit(string s) {
        int l=0,r=0,ans=0;
        if(s.length()==0)
            return 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='L')
            {
                l++;
            }
            if(s[i]=='R')
                r++;
            if(l==r)
                ans++;
            
        }
        return ans;
    }
};
        