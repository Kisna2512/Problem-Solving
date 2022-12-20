class Solution {
 public:
  bool canVisitAllRooms(vector<vector<int>>& rooms) {
    int n = rooms.size();
    vector<int> vis(n, 0);
    queue<vector<int>> q;
    q.push(rooms[0]);
    vis[0] = 1;
    while (!q.empty()) {
      vector<int> arr = q.front();
      q.pop();
      for (auto it : arr) {
        if (!vis[it]) {
          q.push(rooms[it]);
          vis[it] = 1;
        }
      }
    }

    for (auto it : vis) {
      if (it == 0) {
        return false;
      }
    }

    return true;
  }
};
