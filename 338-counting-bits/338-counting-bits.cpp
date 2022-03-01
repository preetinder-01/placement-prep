class Solution {
public:
    int countSetBits(int n)
{
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
    vector<int> countBits(int n) {
        vector<int>sol;
        for(int i=0;i<=n;i++)
        {
            int j=countSetBits(i);
            sol.push_back(j);
        }
        return sol;
    }
};