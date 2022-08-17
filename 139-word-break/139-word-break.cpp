class Solution {
public:
    int dp[301];
    bool wb(string s,int pos,vector<string>& wordDict)
    {
        if(pos==s.size())
            return true;
        if(dp[pos]!=-1)return dp[pos];
        string t="";
        for(int i=pos;i<s.size();i++)
        {
            t=s.substr(pos,i-pos+1);
            if(find(wordDict.begin(),wordDict.end(),t)!=wordDict.end() and wb(s,i+1,wordDict))
                return true;
        }
        return dp[pos]=false;
        
    }
    set<string>st;
    bool wordBreak(string s, vector<string>& wordDict) {
        // set<string> s;
        memset(dp,-1,sizeof(dp));
        return wb(s,0,wordDict);
    }
};