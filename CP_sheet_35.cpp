#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

//1--->a
//b--->c    

// First test case
  // 1-->5
  // 10-->4


 
 int t;
 cin>>t;
 while(t--)
 {
 	ll a,b,c;
 	cin>>a>>b>>c;
   
   ll ans1=-1;
   ll ans2=-1;
    if(a < c)
    {
    	ans1=1;
    }

    if(a*b > c)
    {
    	ans2=b;
    }

    cout<<ans1<<" "<<ans2<<endl;


    














 }












    return 0;
}