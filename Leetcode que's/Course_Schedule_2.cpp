// link:https://leetcode.com/problems/course-schedule-ii/

// BFS using topo sort

class Solution {
  public:
    vector < int > findOrder(int numCourses, vector < vector < int >> & prerequisites) {

      int N = prerequisites.size();
      vector < int > indegree(numCourses, 0);
      queue < int > q;
      for (int i = 0; i < N; i++) {
        for (int j = 0; j < prerequisites[i].size(); j++) {
          if (j == 0) {
            indegree[prerequisites[i][j]]++;
          }
        }
      }
      vector < int > adj[numCourses];
      for (int i = 0; i < prerequisites.size(); i++) {
        adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
      }
      for (int i = 0; i < indegree.size(); i++) {
        if (indegree[i] == 0) {
          q.push(i);
        }
      }

      vector < int > topo;
      while (!q.empty()) {
        int node = q.front();
        q.pop();
        topo.push_back(node);
        for (auto it: adj[node]) {
          indegree[it]--;
          if (indegree[it] == 0) {
            q.push(it);
          }

        }

      }
      if (topo.size() != numCourses) {
        topo.clear();
      }

      return topo;

    }
};
