class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        if(n==1)
            return 0;
        int profit=0,start=0,end=1;
        while(end<n)
        {
            if(prices[start]<prices[end])
            {
                profit=max(profit,(prices[end]-prices[start]));
                
            }
            else
                start=end;
            end++;
            
        }
        return profit;
    }
};