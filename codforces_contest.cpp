#include<bits/stdc++.h>

using namespace std;

int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t;
    cin>>t;

while(t--)
{
	int n;
	cin>>n;
  vector<int> arr(n);
  for(int i=0;i<n;i++)
  {
  	int x;
  	cin>>x;
  	arr.push_back(x);
  }

  
  int sum=0;
 for (int i = 0; i < n; i++)
 {
 	sum |= arr[i];
 }

 cout<<sum<<"\n";


}



    return 0;
}
