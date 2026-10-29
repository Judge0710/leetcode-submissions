class Solution {
    int direction[4][2] ={ {1,0},{-1,0},{0,1},{0,-1}};
public:
    int numIslands(vector<vector<char>>& grid)
    {
        int ROW = grid.size();
        int COL = grid[0].size();
        int island = 0 ;
        for (int r = 0 ; r < ROW ; r++)
        {
            for(int c = 0 ; c < COL ; c++)
            {
                if (grid[r][c] == '1')
                {
                    bfs(grid,r,c);
                    island++;
                }
            }
        }
        return island ;
    }
private:
    void bfs(vector<vector<char>>& grid , int r , int c)
    {
        queue<pair<int, int>> q;
        grid[r][c] = '0';
        q.push({r, c});
        while(!q.empty())
        {
            auto node = q.front();
            q.pop();
            int row = node.first;
            int col = node.second;
            for(int i = 0 ; i < 4 ; i++)
            {
                int nr = row + direction[i][0];
                int nc = col + direction[i][1];
                if(nr >= 0 && nc >= 0 && nr < grid.size() && nc < grid[0].size()
                && grid[nr][nc] == '1')
                {
                    q.push({nr, nc});
                    grid[nr][nc] = '0';
                    
                }
                
            }

            
        }
        
        
    }
};
