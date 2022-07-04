class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int col=1,rows=matrix.size(),cols=matrix[0].size();
        for(int i=0;i<rows;i++)
        {
            if(matrix[i][0]==0)col=0;   // if value of any element at zeroth column of any row is zero then set col var to zero which means 
            //that zero column need to be zeroed
            for(int j=1;j<cols;j++)
            {
                if(matrix[i][j]==0)
                    matrix[i][0]=matrix[0][j]=0;
                
            }         
        }
        for(int i=rows-1;i>=0;i--)
        {
            for(int j=cols-1;j>=1;j--)
            {
                if(matrix[i][0]==0 or matrix[0][j]==0)
                    matrix[i][j]=0;
            }
        if(col==0)matrix[i][0]=0;
        }
    }
};