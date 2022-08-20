#include<bits/stdc++.h>

using namespace std;
// Completly Understood
int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n,t;
    cin>>n>>t;


    int arr[n-1];

       for(int i=1;i<=n-1;i++)
       {
        	cin>>arr[i];
       }

    int i=1;
   
    while(i < t)
    {
    	int nextPos=i+arr[i];
    	i=nextPos;
    }

    if(i==t)
    {
       cout<<"YES"<<endl;
    }
    else
    {
    	cout<<"NO"<<endl;
    }

   

    return 0;
}