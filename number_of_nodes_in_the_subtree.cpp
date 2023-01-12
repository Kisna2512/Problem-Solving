class Solution {
public:
    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        // BFS.
        // A tree is undirected, connected graph that has no cycles.
        // We are going to use map to store the neighbours of every node.
        unordered_map<int, unordered_set<int>> neighbour;
        
        for(auto edge : edges){
            int u = edge[0];
            int v= edge[1];
            neighbour[u].insert(v);
            neighbour[v].insert(u);
        }
        
        // Now here we cannot use traditional bfs traversal.
        // Where we start from the src node and traverse level wise to the adjacent nodes.
        // But here we have to calculate the count of each label(a-z) of the subtrees of it's children first.
        // In order to compute the answer for the parent node.
        // So, we have to start building up the answers from the leaf nodes. Key Point - Bottom up.
        
        // We require some container to store the count of labels of each node's subtree.
        vector<vector<int>> countNode(n, vector<int>(26, 0));
        
        // How to build a bottom-up answer.
        // We have to maintain a queue of nodes for sure. which will be storing
        // the leaf nodes.
        queue<int> q;
        
        // We will store all the leaf nodes as well as mark the count of thier labels to them.
        for(int i = 0;i < n;i++){
            // for adding the leaf node into the queue.
            if(neighbour[i].size() == 1 && i != 0){
                q.push(i);
            }
            // mark a single count for their own labels.
            countNode[i][labels[i] - 'a'] = 1;
        }
        
        while(!q.empty()){
            // dequeue the node
            int node = q.front();
            q.pop();
            
            // get the parent of that node. The only neighbour it has is the parent.
            int parent = *neighbour[node].begin();
            
            // Now the parent will have to remove this leaf node to avoid traversing back from parent to node.
            // (Due to this step, we remove all child nodes from a parent, at end parent will only have it's parent in Neighbour map.).
            neighbour[parent].erase(node);
            
            // Add the counts of the curr node in the parent node.
            for(int i = 0;i < 26;i++){
                countNode[parent][i] += countNode[node][i];
            }
            
            // If the parent size is 1 which indicates it has only it's parent in neighbour Map 
            // and parent is not 0. Then the curr node is the last child of the parent so we can insert the parent into 
            // the queue now.
            
            if(parent != 0 && neighbour[parent].size() == 1){
                q.push(parent);
            }
            
        }
        
        // Iterating over all the nodes and storing the answer.
        vector<int> ans(n, 0);
        for(int node = 0;node < n;node++){
            ans[node] = countNode[node][labels[node] - 'a'];
        }
        
        return ans;
    }
};
