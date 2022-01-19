class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int ans=0;
        for(int i=0;i<sentences.size();i++)
        {
            stringstream s(sentences[i]);
            string word;
            int count=0;
            while(s>>word)
            {
                count++;
            }
            ans=max(ans,count);
        }
        return ans;
    }
};