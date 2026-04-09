class Solution {
public:
    void bfs(int i,int j, int m, int n, vector<vector<char>>& grid){
        if(i<0 || j<0 || i>=m || j>=n){
            return;
        }
        if(grid[i][j]=='1'){
            grid[i][j]='0';
            bfs(i+1,j,m,n,grid);
            bfs(i,j+1,m,n,grid);
            bfs(i-1,j,m,n,grid);
            bfs(i,j-1,m,n,grid);
        }
        return;
    }

    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int count =0;
        int n = grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]=='1'){
                    bfs(i,j,m,n,grid);
                    count++;
                }
            }
        }
        return count;
    }
};
