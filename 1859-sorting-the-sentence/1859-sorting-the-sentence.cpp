class Solution {
public:
    string sortSentence(string s) {
        string word="";
        int n=0;
        for(char i : s)
        {
            if(i == ' ') n++;
        }
        n++;
        vector<string> str(n);
        for(char i:s)
        {
            if(isdigit(i))
            {
                str[i-'0'-1]=word;
                word="";
            }
            else if(i == ' ')
                continue;
            else
                word+=i;
            
        }
        string ans;
        for(auto a:str)
        {
            ans+=a+' ';
        }
        ans.pop_back();
        return ans;
        
    }
};