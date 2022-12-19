class Solution {
public:


      void dfs(vector<vector<int>> & adj,vector<int> & vis,int source)
      {
           vis[source]=1;
           for(auto it:adj[source])
           {
               if(!vis[it])
               {
                   dfs(adj,vis,it);
               }
           }  
        

      }

   
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> adj(n);

          for(int i=0;i<edges.size();i++)
          {
              adj[edges[i][0]].push_back(edges[i][1]);
              adj[edges[i][1]].push_back(edges[i][0]);
          }


          vector<int> vis(n,0);
          dfs(adj,vis,source);

        return vis[destination]==1;

    }
};
