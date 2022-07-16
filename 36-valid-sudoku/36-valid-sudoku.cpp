class Solution {
public: // travered matrix once and checked for whethere element already present or not 
    bool isValidSudoku(vector<vector<char>>& board) {
        set<string> s;
        // used set to store the already present elemnets in coded form : " ROW+4+7" means row index 4 contains 7 
        for(int i=0;i<81;i++)
        {
            int row=i/9;
            int col=i%9;
            int box=3*(row/3)+(col/3);
            if(board[row][col]=='.')
                continue;
            if(s.find("row"+to_string(row)+to_string(board[row][col]))!=s.end())
                return false;
            else
                s.insert("row"+to_string(row)+to_string(board[row][col]));
            //column
            if(s.find("column"+to_string(col)+to_string(board[row][col]))!=s.end())
                return false;
            else
                s.insert("column"+to_string(col)+to_string(board[row][col]));
            //box
            if(s.find("box"+to_string(box)+to_string(board[row][col]))!=s.end())
                return false;
            else
                s.insert("box"+to_string(box)+to_string(board[row][col]));
        }
        
        
        
        
        return true;
    }
};
