class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string str="";
        for(int i=0;i<s.size();i++)
        {
            if((48<=s[i] and s[i]<=57) or (97<=s[i] and s[i]<=122))
                str+=s[i];
        }
        // cout<<str;
        int i=0,j=str.size()-1;
        while(i<j)
        {
            if(str[i++]!=str[j--])
                return false;
        }
        return true;
    }
};