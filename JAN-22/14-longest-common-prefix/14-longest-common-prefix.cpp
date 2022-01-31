class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="",ans="";
        int i,j;
        s+=strs[0];
        if(strs.size()<=1)
            return s;
        for(i=1;i<strs.size();i++)
        {
            string a=strs[i];
            j=0;
            while((s[j]==a[j])&&(j<a.length())&&(j<s.length()))
            {
                j++;
            }
            ans=s.substr(0,j);
            s=ans;
        }
        return ans;
    }
};