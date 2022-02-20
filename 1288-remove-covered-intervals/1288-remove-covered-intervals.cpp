class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
//         vector<vector<int>> check;
//         
//         int sol=intervals.size();
//         for(int i=1;i<intervals.size();i++)
//         {
//             vector<int>check1;
//             vector<int>check2;

//             check1=intervals[i-1];
//             check2=intervals[i];
//             int a,b,c,d;
//             a=check1[0];
//             b=check1[1];
//             c=check2[0];
//             d=check2[1];          
//             if(a<=c and d<=b)
//             {
//                     sol--;
//             }
//             if(a==c and d>=b)
//             {
//                 sol--;
//             }
//         }
//         return sol;
        sort(intervals.begin(),intervals.end());
        int sol=0,left=-1,right=-1;
        for(auto& i:intervals)
        {
            if(i[0]>left && i[1]>right)
            {
                
                left=i[0];
                ++sol;
            }
            right=max(right,i[1]);
        }
        
        return sol;
    }
};