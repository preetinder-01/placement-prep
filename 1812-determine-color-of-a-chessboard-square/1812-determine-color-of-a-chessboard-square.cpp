class Solution {
public:
    bool squareIsWhite(string str) {
        int a=str[0],b=str[1];
        if(str[0]%2==str[1]%2)
        {
            return 0;
        }
        return 1;
    }
};