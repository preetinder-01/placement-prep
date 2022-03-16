class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
     stack<int> s;
        int j=0;
        for(auto i:pushed)
        {
            s.push(i);
            // int j;
            while(!s.empty() &&s.top()==popped[j])
            {
                s.pop();
                j++;
            }
        }
        return s.empty();
    }
};