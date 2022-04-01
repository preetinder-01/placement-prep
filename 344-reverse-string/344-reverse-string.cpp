class Solution {
public:
    void reverseString(vector<char>& s) {
        int size=s.size();
        int i=0;
        int j=size-1;
        while(i<j)
        {
            char temp=s[j];
            s[j]=s[i];
            s[i]=temp;
            i++;j--;
        }
        
    }
};