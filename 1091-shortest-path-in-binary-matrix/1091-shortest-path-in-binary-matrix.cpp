class Solution {
public:
    // to check whether new pos is valid or not 
    bool isValid(int r,int c,vector<vector<int>> &grid,int m,int n)
    {
        if(r>=0 &&c>=0 && r<=m && c<=n && grid[r][c]==0)
        {
            return true;
        }
        return false;
    }
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]!=0)
        {
            return -1;
        }
        vector<vector<int>> dirs={{-1,-1},{-1,0},{-1,1},{0,-1},{0,1},{1,-1},{1,0},{1,1}};
        queue<pair<int,int>> q;
        q.push({0,0});
        // as 0,0 is visited make it equal to 1  
        grid[0][0]=1;
        int ans=0;
        // MxN matrix so m is rows so got sie directly for n i.e. no. of colummns used grid[0]
        int m=grid.size()-1;
        int n=grid[0].size()-1;
        
        while(!q.empty())
        {
            int ls=q.size();
            ans++;
            
            for(int i=0;i<ls;i++)
            {
                // got first elem from queue 
                pair<int,int>p=q.front();
                q.pop();
                // checking whther it has reached the end or not 
                if(p.first==m &&p.second==n)
                {
                    return ans;
                }
                // now trying all possible moves and checking for validity
                for(int j=0;j<dirs.size();j++)
                {
                    int r=p.first+dirs[j][0];
                    int c=p.second+dirs[j][1];
                    if(isValid(r,c,grid,m,n))
                    {
                        // if move valid then push to queue and changing that to visited one 
                        q.push({r,c});
                        grid[r][c]=1;
                    }
                }
                
            }
        }
        return -1;
    }
};