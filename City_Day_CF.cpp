// Link of the problem:https://codeforces.com/problemset/problem/1199/A

#include<bits/stdc++.h>

using namespace std;

int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
  

  int n,x,y;
  cin>>n>>x>>y;

  vector<int> arr(n);
  for(int i=0;i<n;i++) cin>>arr[i];

  int ans=0;
  for(int i=0;i<n;i++)
  {
  	if(arr[i] < arr[ans])
  	{
  		ans=i;
  	}
  	cout<<i-ans<<" ";
  	if(i-ans>=y)
  	{
  		cout<<"Breaking: "<<i-ans<<endl;
  		break;
  	}
  }	
cout<<endl;
cout<<(ans+1)<<endl;

    return 0;
}
