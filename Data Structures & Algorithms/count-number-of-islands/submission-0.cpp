class Solution {
public:

    void dfs(int x, int y, vector<vector<char>> &grid)
    {
        int n=grid.size();
        int m=grid[0].size();
        if( x>=n or y>=m or x<0 or y<0 or grid[x][y]=='0')
        {
            return;
        }   
        grid[x][y]='0';
        dfs(x+1,y,grid);
        dfs(x,y+1,grid);
        dfs(x-1,y,grid);
        dfs(x,y-1,grid);

    }
    int numIslands(vector<vector<char>>& grid) {
        int x=grid.size();
        int y=grid[0].size();
        int count=0;
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                if(grid[i][j]=='1')
                {
                    count++;
                    dfs(i,j,grid);
                }
            }
        }
        return count;
    }
};
