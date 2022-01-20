class Solution {
public:
    bool wordPattern(string pattern, string s) {
        istringstream strcin(s);
        string word;
        vector<string>words;
        while(strcin>>word)
        {words.push_back(word);}
        unordered_map<char,int> p2i;
        int i= 0;
        string pat="";
        for(auto c:pattern)
        {
            if(p2i.count(c)==0)
            {
                i++;
                p2i[c]=i;
            }
            pat+=to_string(p2i[c]);
        }
        unordered_map<string,int> str2i;
    i=0;
    string pat1="";
    for(auto c:words)
    {
        if(str2i.count(c)==0)
        {
            i++;
            str2i[c]=i;
        }
        pat1+=to_string(str2i[c]);
        
    }
    return pat1==pat;
    }
    
};