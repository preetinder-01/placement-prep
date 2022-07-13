// { Driver Code Starts
// Program to find the maximum profit job sequence from a given array 
// of jobs with deadlines and profits 
#include<bits/stdc++.h>
using namespace std; 

// A structure to represent a job 
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
}; 


 // } Driver Code Ends
/*
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
*/

class Solution 
{
    static bool cmp(Job A,Job B)
    {
        return A.profit>B.profit;
    }
    public:
    //Function to find the maximum profit and the number of jobs done.
    int findmax(Job arr[],int n)
    {
        int mx=INT_MIN;
        for(int i=0;i<n;i++)
        {
            int d=arr[i].dead;
            mx=max(mx,d);
        }
        return mx;
    }
    vector<int> JobScheduling(Job arr[], int n) 
    { 
        // your code here
        
        sort(arr,arr+n,cmp);
        int ns=findmax(arr,n);
        vector<int>res;
        vector<int>abc(ns+1,-1);
        int count=0,profit=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=arr[i].dead;j>0;j--)
            {
                if(abc[j]==-1)
                {
                    count++;
                    profit+=arr[i].profit;
                    abc[j]=1;
                    break;
                }
            }
        }
        res.push_back(count);
        res.push_back(profit);
        return res;
    } 
};

// { Driver Code Starts.
// Driver program to test methods 
int main() 
{ 
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        Job arr[n];
        
        //adding id, deadline, profit
        for(int i = 0;i<n;i++){
                int x, y, z;
                cin >> x >> y >> z;
                arr[i].id = x;
                arr[i].dead = y;
                arr[i].profit = z;
        }
        Solution ob;
        //function call
        vector<int> ans = ob.JobScheduling(arr, n);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
	return 0; 
}


  // } Driver Code Ends