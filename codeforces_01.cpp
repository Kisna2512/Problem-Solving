#include<bits/stdc++.h>

using namespace std;

int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

  int n;
  cin>>n;
   
int x=0;
  	
  while(n--)
  {
   
  string s;
  	cin>>s;
  	if(s=="++X" || s=="X++")
  	{
  		++x;
  	}
  	if(s=="--X" || s=="X--")
  	{
  		--x;
  	}
  	
  }

cout<<x<<endl;
    return 0;
}