#include<bits/stdc++.h>

using namespace std;
// 33
int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

int n,m;
cin>>n>>m;
int cnt=0;
if(n==m)
{
	cout<<0<<endl;
}
else if(m%n!=0)
{
	cout<<-1<<endl;
}
else
{
   long long div=m/n;

   while(div%2==0)
   {
   	div/=2;
   	cnt++;
   }
   while(div%3==0)
   {
   	div/=3;
   	cnt++;
   }
  if(div!=1)
  {
  	cnt=-1;
  }
  cout<<cnt<<endl;


}







    return 0;
}