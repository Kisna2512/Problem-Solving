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

  int x;
  cin>>x;

  int d=0;
  int a=x%10;
  string s=to_string(x);
  for(int i=0;i<s.size();i++)
  {
  	d+=i+1;
  }
  cout<<(a-1)*10 + d<<endl;










}







    return 0;
}