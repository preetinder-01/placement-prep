// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends
class Solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here 
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            m[a[i]]++;
        }
        int j=0;
        while(m[0]--)
        {
            a[j]=0;
            j++;
        }
        while(m[1]--)
        {
            a[j]=1;
            j++;
        }while(m[2]--)
        {
            a[j]=2;
            j++;
        }
    }
    
};

// { Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        Solution ob;
        ob.sort012(a, n);

        for(int i=0;i<n;i++){
            cout << a[i]  << " ";
        }

        cout << endl;
        
        
    }
    return 0;
}

  // } Driver Code Ends