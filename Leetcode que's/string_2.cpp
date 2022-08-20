#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string removeDuplicates(string s, int k)
    {
        stack<pair<char, int>> st;

        for (auto it : s)
        {
            if (st.empty() || st.top().first != it)
            {
                st.push({it, 1});
            }
            else
            {
                auto prev = st.top();
                st.pop();
                st.push({it, prev.second + 1});
            }

            if (st.top().second == k)
            {
                st.pop();
            }
        }

        string ans = "";
        while (!st.empty())
        {
            auto cur = st.top();
            st.pop();
            while (cur.second--)
            {
                ans += cur.first;
            }
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    Solution obj;
    string s = "deeedbbcccbdaa";
    int k = 3;
    cout << obj.removeDuplicates(s, k);

    return 0;
}