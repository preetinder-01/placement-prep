class Solution {
public:
    int scoreOfParentheses(string s) {
     int depth=0,score=0;
        char prev='(';
        for(const char &ch:s)
        {
            if(ch=='(')
            {
                depth++;
            }
            else
            {depth--;
                if(prev=='(')
                {
                    score+=pow(2,depth);
                    
                }
                
            }prev=ch;
            
        }
        return score;
    }
};