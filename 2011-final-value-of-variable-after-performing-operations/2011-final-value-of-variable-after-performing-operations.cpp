class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=operations.size();
        string str;
        int x=0;
        for(int i=0;i<n;i++)
        {
            str=operations[i];
            if(str[0]=='+' || str[1]=='+')
            {
                x+=1;
            }
            else
                x-=1;
        }
        return x;
    }
};