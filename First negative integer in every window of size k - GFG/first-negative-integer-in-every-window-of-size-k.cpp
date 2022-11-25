//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
             
                
                
                vector<long long> ans;
                
                
                
                
                
                
                int temp=0;
                
                int i=0;
                int j=0;
                bool flag=false;
                queue<int> q;
                while(i  < N)
                { 
                    
                    if(A[i] < 0)
                    {
                        q.push(i);
                    }
                    
                    if(i-j+1==K)
                    {
                        if(!q.empty())
                        {
                              ans.push_back(A[q.front()]);
                              if(j==q.front())
                              {
                                  q.pop();
                              }
                        }
                        else
                        {
                              ans.push_back(0);
                        }
                        
                        j++;
                        
                    }
                    
                    i++;
                }
                
                
                   
            return ans;    
                
                
                
                                                    
 }