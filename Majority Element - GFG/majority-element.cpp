// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        sort(a,a+size);
        int hero=a[0],power=1;
        // int duplicate;
        for(int i=1;i<size;i++)
        {
            if(a[i]==hero)
            {
                power++;
            }
            else
            {
                power--;
            }
            if(power==0)
            {
                hero=a[i];
                power=1;
            }
            
        }
        int count=0;
        for(int i=0;i<size;i++)
        {
            if(a[i]==hero)
                count++;
        }
        if(count>size/2)
        return hero;
        else
        return -1;
        // your code here
        
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends