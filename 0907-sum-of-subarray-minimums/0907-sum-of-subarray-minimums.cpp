
#define min(a, b)(a < b ? a : b)

class Solution
{
    int mod = 1e9 + 7;
    public:
        int sumSubarrayMins(vector<int> &arr)
        {

           	// Brute Force O(N*3)
           	//             long long sum = 0;

           	//             for (int i = 0; i < arr.size(); i++)
           	//             {

           	//                 for (int j = i; j < arr.size(); j++)
           	//                 {
           	//                     int mini = INT_MAX;
           	//                     for (int k = i; k <= j; k++)
           	//                     {
           	//                         mini = min(mini, arr[k]);
           	//                     }
           	//                     sum += mini;
           	//                 }
           	//             }

           	//             return sum;

           	// O(N*2) Solution

           	//             long  long int sum=0;
           	//             long long int mini=INT_MAX;
           	//             for(int i=0;i < arr.size();i++)
           	//             {
           	//                 mini=arr[i];
           	//                 sum+=mini;

           	//                 for(int j=i+1;j < arr.size();j++)
           	//                 {
           	//                     mini=min(mini,arr[j]);
           	//                     sum+=mini;
           	//                 }

           	//             }

           	//             return (sum%mod);

           	// O(N) Approach

            stack<int> st;
            int ans = 0;

            int n = arr.size();
            for (int i = 0; i <= arr.size(); i++)
            {
                while (!st.empty() && (i == n || arr[st.top()] >= arr[i]))
                {
                    int idx = st.top();
                    st.pop();

                    long right = i < n ? i - idx : n - idx;
                    long left = st.empty() ? idx + 1 : idx - st.top();

                    ans = (ans + left *right *arr[idx]) % mod;
                }
                st.push(i);
            }

            return ans;
        }
};