// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  long int sumofdigit(int N)
  {
      long int sum=0;
      while(N!=0)
        {
            int rem=N%10;
            sum+=rem;
            N=N/10;
        }
        return sum;
      
  }
    int isDigitSumPalindrome(int N) {
        // code here
        long int j=sumofdigit(N),k;
        long int num=0;
        // cout<<j<<" ";
        k=j;
        while(j)
        {
            int i=j%10;
            num=(num*10)+i;
            j=j/10;
        }
        // cout<<num<<" ";
        if(k==num)
            return 1;
        else
            return 0;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}
  // } Driver Code Ends