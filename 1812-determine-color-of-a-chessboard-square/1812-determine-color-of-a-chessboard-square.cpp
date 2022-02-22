class Solution {
public:
    bool squareIsWhite(string str) {
        int a=str[0],b=str[1];
        if(a%2==b%2)
        {
            return 0;
        }
        return 1;
    }
};