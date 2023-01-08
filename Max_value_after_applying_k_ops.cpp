class Solution
{
	public:
		long long maxKelements(vector<int> &nums, int k)
		{
			priority_queue<int> pq;

			for (auto it: nums)
			{
				pq.push(it);
			}

			long long ans = 0;
			while (!pq.empty() && k--)
			{
				int top = pq.top();
				pq.pop();
				ans += top;
				if (top % 3 == 0)
				{
					top = (top / 3);
				}
				else
				{
					top = (top / 3) + 1;
				}

				pq.push(top);
			}

			return ans;
		}
};
