class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vector<int> diff;
        int mincost = 0;
        
        for(int i = 0; i<costs.size(); ++i)
        {
			// cost to send every person to city A
            mincost += costs[i][0];
			// computing difference if person sent to city B
            diff.push_back(costs[i][1] - costs[i][0]);
        }
		
		// sort the diff vector
        sort(diff.begin(),diff.end());
        
		// picking n persons having least diff
		// sending them to city B
        for(int i=0; i<costs.size()/2; ++i)
        {
            mincost += diff[i];
        }
        
        return  mincost;
        
    }
	
};


/*
ALGORITHM

Input: costs = [[10,20],[30,200],[400,50],[30,20]]
Output: 110
Compute the cost of sending every person to City A.
The cost will be 10 + 30 + 400 + 30 = 470
Compute the difference if a Person is sent to City B
D1 -> 20 - 10 = 10
D2 -> 200 - 30 = 170
D3 -> 50 - 400 = -350
D4 -> 20 - 30 = -10
If the last two persons are sent to City B instead of City A, you can save maximum, as those are the persons costing more to City A.
Sort the diff.
D3, D4, D1, D2
Now pick N persons which has least diff and send them to City B.
Add the diff cost to the total
470 + (-350) + -(10) = 110
return cost
*/