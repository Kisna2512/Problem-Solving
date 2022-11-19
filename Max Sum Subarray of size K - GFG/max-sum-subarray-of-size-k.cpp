//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int K, vector<int> &arr , int n){
        int i = 0;
    int j = 0;

    long long int maxi = 0;
    long long int sum=0;
    // Sliding Window O(N)
    while (j < n)
    {

        sum += arr[j];
        if (j - i + 1 == K)
        {
            maxi = max(maxi, sum);
            sum -= arr[i++];
        }

        j++;
    }

    return maxi;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends