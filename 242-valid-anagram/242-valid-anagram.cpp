class Solution {
public:
    bool isAnagram(string s, string t) {
        int n1=s.size();
        int n2=t.size();
        if(n1!=n2){
            return false;
        }
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return(s==t);
    }
};