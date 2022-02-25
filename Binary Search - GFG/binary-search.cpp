// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
public:
int solve(int arr[],int start,int end,int k)
{
    if(end>=start)
    {
    int mid =start+(end-start)/2;
    if(arr[mid]==k)
    return mid;
    if(k<arr[mid])
    {
      return  solve(arr,start,mid-1,k);
    }
    return solve(arr,mid+1,end,k);
    }
        return -1;
    
}
    int binarysearch(int arr[], int n, int k){
        // code here
     return solve(arr,0,n-1,k);    
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int N;
        cin>>N;
        int arr[N];
        for(int i=0;i<N;i++)
            cin>>arr[i];
        int key;
        cin>>key;
        Solution ob;
        int found = ob.binarysearch(arr,N,key);
        cout<<found<<endl;
    }
}

  // } Driver Code Ends