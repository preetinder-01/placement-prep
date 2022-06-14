class Solution {
public:
    vector<vector<int>>dp;  // declared vector dp
    
    int minDistance(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        dp.resize(m+1,vector<int>(n+1,1000));   // resizwed vector in accordance with our string sizes 
        return helper(word1,word2,0,0);
    }
    int helper(string &s1,string &s2,int i,int j )
    {
        if(i==size(s1) and j==size(s2))return 0;    // if both empty i.e. same then return 0
        if(i==size(s1) or j==size(s2)) return max(size(s1)-i,size(s2)-j);   // if any one empty then elems in another are the number if steps 
        if(dp[i][j]!=1000)return dp[i][j];  // if problem already traveresed check for dp vector (memoization)
        if(s1[i]==s2[j]) return helper(s1,s2,i+1,j+1);
        return dp[i][j]=1+ min(helper(s1,s2,i+1,j),helper(s1,s2,i,j+1));    // go for both choices that i increemented and j increemented 
        // used 1 i.e. once char removed 
    }
};