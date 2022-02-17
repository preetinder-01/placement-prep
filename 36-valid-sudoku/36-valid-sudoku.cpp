class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        set<string> s;
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