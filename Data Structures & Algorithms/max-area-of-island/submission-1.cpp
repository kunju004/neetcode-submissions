class Solution {
public:
    vector<int>dummy;
    void dfs(int x,int y, vector<vector<int>>&grid)
    {
        int m=grid.size();
        int n=grid[0].size();

        if(x>=m or y>=n or x<0 or y<0 or grid[x][y]==0)
        return;

        dummy.push_back(grid[x][y]);
        grid[x][y]=0;
        

        dfs(x-1,y,grid);
        dfs(x,y+1,grid);
        dfs(x+1,y,grid);
        dfs(x,y-1,grid);
       
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans=0;
        int x=grid.size();
        int y=grid[0].size();
        for(int m=0;m<x;m++)
        {
            for(int n=0;n<y;n++)
            {
                if(grid[m][n]==1)
                    {
                        // dummy.push_back(grid[m][n]);
                        dfs(m,n,grid);
                    }
                    int s=dummy.size();
                    ans=max(ans,s);
                    dummy.clear();    
            }
        }
        return ans;
    }
};
