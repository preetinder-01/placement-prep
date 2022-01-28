class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
     unordered_set<char> j;
        int total=0;
        for(int i=0;i<jewels.size();i++)
        {
            if(j.find(jewels[i])==j.end())
                j.insert(jewels[i]);
        }
        for(int i =0;i<stones.size();i++)
        {
            if(j.find(stones[i])!=j.end())
                total++;
        }
        return total;
    }
};