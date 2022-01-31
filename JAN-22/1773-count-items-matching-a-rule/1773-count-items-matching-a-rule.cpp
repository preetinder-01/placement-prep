class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int j=0;
        int k=0;
        if(ruleKey=="type")
            j=0;
        else if(ruleKey=="color")
            j=1;
        else
            j=2;
        for(auto i:items)
        {
            if(i[j]==ruleValue)
                k++;
        }
        return k;
    }
};