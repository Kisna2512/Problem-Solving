class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& arr) {
        
        int n = maze.size();
        int m = maze[0].size();
        
        
        vector<vector<int>>vis(n, vector<int>(m, 0));
        
        queue<vector<int>>q;
        q.push(arr);
        
        vis[arr[0]][arr[1]] = 1;
        
        int res = -1;
        
        int dx[] = {-1, 0, 1, 0};
        int dy[] = {0, 1, 0, -1};
        
        int flag = 1;
        
        while(!q.empty()){
            int size = q.size();
            ++res;
            
            for(int i=0;i<size;i++){
                auto temp = q.front();
                q.pop();
                
                int x = temp[0];
                int y = temp[1];

                
                if((x == 0 || x == n-1 || y == 0 || y == m-1) && flag == 0)
                    return res;
                
                for(int j=0;j<4;j++){
                    int newx = x + dx[j];
                    int newy = y + dy[j];
                    
                    if(newx >= 0 && newx < n && newy >= 0 && newy < m && maze[newx][newy] == '.'){
                        
                        
                        if(vis[newx][newy] == 0){
                            if(flag == 1)
                                flag = 0;
                            vis[newx][newy] = 1;
                            q.push({newx, newy});
                        }
                    }
                }
            }
        }
        
        return -1;
    }
};