class Solution {
public:
    // bool squareIsWhite(string str) {
    //     int a=str[0],b=str[1];
    //     if(str[0]%2==str[1]%2)
    //     {
    //         return 0;
    //     }
    //     return 1;
    // }
     bool squareIsWhite(string coordinates) {
        int arr[8][8]={{0,1,0,1,0,1,0,1},
                      {1,0,1,0,1,0,1,0},
                      {0,1,0,1,0,1,0,1},
                      {1,0,1,0,1,0,1,0},
                      {0,1,0,1,0,1,0,1},
                      {1,0,1,0,1,0,1,0},
                      {0,1,0,1,0,1,0,1},
                      {1,0,1,0,1,0,1,0}};
        
       
            return arr[coordinates[1]-'0'-1][coordinates[0]-'a'];
       
     }
};