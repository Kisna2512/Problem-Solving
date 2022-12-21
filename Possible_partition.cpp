class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int> >& dislikes)
    {

        vector<vector<int> > adj(n + 1);
        for (int i = 0; i < dislikes.size(); i++) {
            adj[dislikes[i][0]].push_back(dislikes[i][1]);
            adj[dislikes[i][1]].push_back(dislikes[i][0]);
        }

        vector<int> vis(n + 1, 0);

        queue<int> q;

        for (int i = 1; i <= n; i++) {

            if (vis[i] != 0)
                continue;
            q.push(i);
            vis[q.front()] = 1;
            int cur = 0, grp = 0;
            while (!q.empty()) {
                cur = q.front();
                grp = vis[cur];
                if (grp == 1) {
                    grp = 2;
                }
                else {
                    grp = 1;
                }
                q.pop();

                for (auto it : adj[cur]) {
                    if (vis[it] == 0) {
                        vis[it] = grp;
                        q.push(it);
                    }
                    else if (vis[it] != grp) {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};
