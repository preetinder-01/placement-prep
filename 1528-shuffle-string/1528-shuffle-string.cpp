class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n=indices.size();
        string arr(n,'a');

        for(int i=0;i<n;i++)
        {
            arr[indices[i]]=s[i];
        }
        return arr;
    }
};