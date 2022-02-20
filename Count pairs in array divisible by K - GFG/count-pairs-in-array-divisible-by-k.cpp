// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    int countKdivPairs(int A[], int n, int k)
    {
        //code here
        int sol=0;
        unordered_map<int,int>m;    // stored in map
        for(int i=0;i<n;i++)
        {
            int value=(k-(A[i]%k))%k;   //we need (a+b)%k==0 so we searched for value required modulo k we did modulo for k as it can be freater than k 
            auto it=m.find(value);
            if(it!=m.end()) // if found incree sol 
            {
                sol+=m[value];
            }
            m[A[i]%k]++;    // incr value in map
        }
    return sol;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		int k;
		cin >> k;

        Solution ob;
		cout << ob. countKdivPairs(a, n , k) << "\n";



	}


	return 0;
}
  // } Driver Code Ends