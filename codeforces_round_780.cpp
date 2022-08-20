#include<bits/stdc++.h>

using namespace std;
int mod=1e9+7;
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
	int a,b;
	cin>>a>>b;
    b=(b*2)%mod;

   int sum=(a+b)%mod;
   if(a==0)
   {
   	cout<<1<<"\n";
   }
   else
   {
   	cout<<(sum+1)<<"\n";
   }





}










    return 0;
}