class Solution {
public:

    void solve(vector<vector<int>>& grid, int i, int j, int m, int n, vector<vector<int>>& vis, int &area){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j]==0 || vis[i][j]==1)
            return;
        
        vis[i][j]=1;
        area++;
        solve(grid, i+1, j, m, n, vis, area);
        solve(grid, i-1, j, m, n, vis, area);
        solve(grid, i, j+1, m, n, vis, area);
        solve(grid, i, j-1, m, n, vis, area);
    }

    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();
        vector<vector<int>> vis(m, vector<int>(n, 0));
        int count = 0;
        int area = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(vis[i][j]==0 && grid[i][j]==1){
                    int curr_area = 0;
                    solve(grid, i, j, m, n, vis, curr_area);
                    count++;
                    area = max(area, curr_area);
                }
            }
        }
        return area;
    }
};