class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string str="";
        for(int i=0;i<s.size();i++)
        {
            if((48<=s[i] and s[i]<=57) or (97<=s[i] and s[i]<=122))
                str+=s[i];
        }
        // cout<<str;
        /*
        
        for(int i=0;i<s.size();i++){
            // using isalnum() function, to check,
            // if s[i] is alphanumeric or not.
            // if s[i] is alphanumeric, the push that character into str
            if(isalnum(s[i])){
                // tolower() is used to convert upper case characters to lower case characters
                str.push_back(tolower(s[i]));
            }
            // if s[i] is not alphanumeric the simply skip it,
            //because we don't need non-alphanumeric characters
            else continue;
        }
        
        
        
        */
        int i=0,j=str.size()-1;
        while(i<j)
        {
            if(str[i++]!=str[j--])
                return false;
        }
        return true;
    }
};