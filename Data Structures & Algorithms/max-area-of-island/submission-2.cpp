class Solution {
public:
    int ans=0;
    int count=0;
    void dfs(vector<vector<int>> &grid, int row, int col)
    {
       
        int x=grid.size();
        int y=grid[0].size();

        if(row>=x or col>=y or row<0 or col<0 or grid[row][col]==0)
        
        {
            return;
        }
        count++;
        grid[row][col]=0;
        

        dfs(grid,row-1,col);
        dfs(grid,row,col+1);
        dfs(grid,row+1,col);
        dfs(grid,row,col-1);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int x=grid.size();
        int y=grid[0].size();
        
        for(int i=0;i<x;i++)
        {
            for(int j=0;j<y;j++)
            {
                if(grid[i][j]==1)
                {
                    dfs(grid,i,j);
                    ans=max(ans,count);
                    count =0;
                }
                       
            }         
           
        }
        return ans;
    }
};
