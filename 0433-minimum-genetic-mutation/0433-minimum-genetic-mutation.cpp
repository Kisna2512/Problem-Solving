class Solution
{
    public:
        int minMutation(string start, string end, vector<string> &bank)
        {

            queue<string> q;

            unordered_set<string> vis;
            q.push(start);
            vis.insert(start);

            int cnt = 0;
            while (!q.empty())
            {
                int n = q.size();

                for (int j = 0; j < n; j++)
                {
                    string node = q.front();
                    q.pop();

                    if (node == end)
                    {
                        return cnt;
                    }

                    for (char ch: "ACGT")
                    {
                        for (int i = 0; i < node.size(); i++)
                        {
                            string adjNode = node;
                            adjNode[i] = ch;
                            if (!vis.count(adjNode) && find(bank.begin(), bank.end(), adjNode) != bank.end())
                            {
                                q.push(adjNode);
                                vis.insert(adjNode);
                            }
                        }
                    }

                    
                }
                cnt++;
            }

            return -1;
        }
};