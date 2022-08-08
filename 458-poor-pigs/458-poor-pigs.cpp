class Solution {
public:
    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        int maxt=minutesToTest/minutesToDie+1;
        return ceil(log(buckets)/log(maxt));
    }
};