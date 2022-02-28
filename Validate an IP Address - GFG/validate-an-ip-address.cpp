// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/* The function returns 1 if
IP string is valid else return 0*/
class Solution {
    public: 
    	int isValid(string s) {
            string num = "";
            int count = 0;
            if(s[s.size()-1]=='.'){
                return 0;
            }
            for(int i=0;i<s.size();){
                while(i<s.size() && s[i]!='.'){
                    num+=s[i];
                    i++;
                }
                if(num.size()==0){
                    return 0;
                }
                else{
                    if(Valid(num)){
                        num = "";
                        count++;
                    }
                    else{
                        return 0;
                    }
                }
                i++;
            }
// AT LAST CHECK IF IP IS VALID OR NOT i.e IT SHOULD HAVE 4 GROUPS SEPRATED BY '.'        
            if(count!=4){
                return 0;
            }
            return 1;
        }
//---------------------------------------------------
        bool Valid(string s){
            if(s.size()>3){
                return false;
            }
            char input_char = s[0];
//CHECKING IF THE STRING CONTAINS ALPHABET       
            if ((input_char >= 65 && input_char <= 90) || (input_char >= 97 && input_char <= 122)){
                        return 0;
            }
    
           int num = stoi(s);
           
 //CHECK IF NUMBER IS LESS THAN 10 and HAS ANY 	EXTRA ZEROS       
            if(num<=9 && s.size()>1){
                return false;
            }
// IF NUMBER IS GREATER THAN 255 THAN INVALID        
            if(num>255){
                return false;
            }
            return true; 
        }  
}; 

// { Driver Code Starts.

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isValid(s) << endl;
    }
    return 0;
}  // } Driver Code Ends