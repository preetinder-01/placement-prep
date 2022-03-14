class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i;
        for(auto i:s)
        {
            if(i=='(' or i=='{' or i=='[')
                st.push(i);
            else
            {
                if(st.empty() || (i=='}' && st.top()!='{')|| (i==']' && st.top()!='[')|| (i==')' && st.top()!='('))
                {
                    return false;
                }
                st.pop();
            }
        }
        // to covr the conditiont that s traversed but parenthese left open
        return st.empty();
        
        
    }
};