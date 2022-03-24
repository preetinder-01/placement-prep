class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int ans=0;
        int n=people.size();
        int start=0;
        int end=n-1;
        
        while(start<=end)
        {
            if(people[start]+people[end]<=limit)
            {ans++;
            start++;
            end--;
            continue;}
            else
            {
                ans++;
                end--;
            }
        }
        return ans;
        
    }
};