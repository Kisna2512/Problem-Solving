// link:https://codeforces.com/contest/1426/problem/A

#include<bits/stdc++.h>

using namespace std;

int main()
{



    int t;
    cin>>t;

    while(t--)
    {
    	int n,x;
    	cin>>n>>x;
        int ans=1;
    	if(n < x)
    	{
          ans=n;
    	}
        int i=2;
        
    	while(i < n)
    	{
           ans++;
           i+=x;

    	}

   cout<<ans<<endl;

    }



    return 0;
}
