// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int res=arr[n-1]-arr[0];
        int max_=arr[n-1];
        int min_=arr[0];
        // int temp=0
        res=abs(max_-min_);
            
        for(int i=1;i<=n;i++)
        {   // try to minimise the second elemenet and maximise the first element 
            // so we chose for max between i-1th elem subtract k and n-i th subtract k
            // for min we chose ith -k ans arr[0]+k
            if(arr[i]>=k){
            max_=max(arr[i-1]+k,arr[n-1]-k);
            min_=min(arr[i]-k,arr[0]+k);
            res=min(res,max_-min_);
            }
        }
        return res;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends