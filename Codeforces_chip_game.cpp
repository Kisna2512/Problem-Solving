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

    ll n,m;
    cin>>n>>m;
   
   if((n+m)%2==0)
   {
     cout<<"Tony"<<endl;
   }else
   {
    cout<<"Burenka"<<endl;
   }

  }


    return 0;
}