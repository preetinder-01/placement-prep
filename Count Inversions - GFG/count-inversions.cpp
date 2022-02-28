// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long marge(long long arr[],long long s,long long mid,long long e)
 {
     long long  n1 = mid-s+1;
     long long  n2 = e-mid;
     long long  a[n1];
     long long  b[n2];
     for(long long  i=0;i<n1;i++)
     {
         a[i]=arr[i+s];
     }
      for(long long  i=0;i<n2;i++)
     {
         b[i]=arr[i+1+mid];
     }
     long long res=0;
     long long  i=0,j=0,k=s;
     while(i<n1&&j<n2)
     {
         if(a[i]<=b[j]) 
         {
             arr[k++]=a[i++];
         }
         else
        { 
            arr[k++]=b[j++];
            res+=(n1-i);
        }
     }
     while(i<n1)
     {
          arr[k++]=a[i++];
     }
     while(j<n2)
     {
          arr[k++]=b[j++];
     }
     return res;
 }
   long long count (long long arr[],long long s,long long e)
   {
       long long res=0;
       if(s<e)
       {
           long long mid=(s+e)/2;
          res+= count(arr,s,mid);
          res+= count(arr,mid+1,e);
          res+= marge(arr,s,mid,e);
       }
       return res;
   }
   long long int  inversionCount(long long arr[], long long n)
   {
       return count(arr,0,n-1);
   }
    

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends