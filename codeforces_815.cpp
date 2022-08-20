#include<bits/stdc++.h>

using namespace std;

#define ll long long

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
  	ll a,b,c,d;
  	cin>>a>>b>>c>>d;
  
    ll x=a*d;
    ll y=b*c;
    if(x==y)
    {
       cout<<"0\n";
    }
    else if (y != 0 && x % y == 0 || x != 0 && y % x == 0)
    {

        cout << "1\n";
    }
    else
    {
        cout << "2\n";
    }
        


    }

  











  














    return 0;
}