class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> s1;vector<char>s2;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='#')
            {
                if(!s1.empty())
                s1.pop_back();
            }
            else
            {
                s1.push_back(s[i]);
            }
        }
        for(int i=0;i<t.length();i++)
        {
            if(t[i]=='#')
            {
                if(!s2.empty())
                    s2.pop_back();
            }
            else
            {
                s2.push_back(t[i]);
            }
        }
        if(s1==s2)
            return true;
            else 
                return false;
    }
};