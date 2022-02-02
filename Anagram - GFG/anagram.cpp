// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function is to check whether two strings are anagram of each other or not.
    bool isAnagram(string a, string b){
        int n1=a.length();
        int n2=b.length();
        if(n1!=n2)
            return 0;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0;
        while(n1--)
        {
            if(a[i]==b[i])
            {
                i++;
            }
            else
            {
                return 0;
            }
        }
        return 1;
        // Your code here
        
    }

};

// { Driver Code Starts.

int main() {
    
    int t;

    cin >> t;

    while(t--){
        string c, d;

        cin >> c >> d;
        Solution obj;
        if(obj.isAnagram(c, d)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

}
  // } Driver Code Ends