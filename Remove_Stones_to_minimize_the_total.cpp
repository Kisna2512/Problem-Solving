class Solution {
public:
    int minStoneSum(vector<int>& piles, int k)
    {

        priority_queue<int> pq;
        int ans = 0;
        for (auto it : piles) {
            pq.push(it);
        }

        while (k-- && !pq.empty()) {
            int top = pq.top();
            pq.pop();
            if (top % 2 == 0) {
                pq.push(top / 2);
            }
            else {
                pq.push((top / 2) + 1);
            }
        }

        while (!pq.empty()) {
            ans += pq.top();
            pq.pop();
        }

        return ans;
    }
};
