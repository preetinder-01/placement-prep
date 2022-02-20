// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        
        vector<int>sol;
        int l=0;
        long long int sum=0;
        for(int i=0;i<n+1;i++)
        {
            
            while(sum>s &&l<i)
            {
                sum-=arr[l];
                l++;
            }
            if(sum==s)
            {
                sol.push_back(l+1);
                sol.push_back(i);
                break;
            }
            sum+=arr[i];
        
        }
        if(sol.size()==0)
        {
            sol.push_back(-1);
        }
        
        return sol;
    }
};

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends