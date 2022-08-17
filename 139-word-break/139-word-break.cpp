class Solution {
public:
//     int dp[301];
//     bool wb(string s,int pos,vector<string>& wordDict)
//     {
//         if(pos==s.size())
//             return true;
//         if(dp[pos]!=-1)return dp[pos];
//         string t="";
//         for(int i=pos;i<s.size();i++)
//         {
//             t=s.substr(pos,i-pos+1);
//             if(find(wordDict.begin(),wordDict.end(),t)!=wordDict.end() and wb(s,i+1,wordDict))
//                 return true;
//         }
//         return dp[pos]=false;
        
//     }
    bool wordBreak(string s, vector<string>& wordDict) {
        // memset(dp,-1,sizeof(dp));
        // return wb(s,0,wordDict);
        
        // in tabluation we checked for each word in dictionary , we check that whether that length is present in strins and if yes thenw we save it in res and move forward 
        vector<bool>res(s.size(),false);
        res[0]=true;
        for(int i=0;i<s.size();i++)
        {
            if(res[i])
            {
                for(auto it:wordDict)
                {
                    if(s.substr(i,it.size()).compare(it)==0)
                        res[i+it.size()]=true;
                }
            }
        }
        return res[s.size()];
    }
};