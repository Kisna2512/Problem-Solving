#include<bits/stdc++.h>
#define int long long



using namespace std;


int multiply(int a,int b,int c)
{
 
    int res=0;


   while(b)
   {
   	  if(b & 1 ) res+=a, res%=c;
   	  a+=a;
   	  a%=c;
   	  b=b>>1;
   }









   return res;





}





int32_t main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a,b,c;
    cin>>a>>b>>c; 
   cout<<multiply(a,b,c);
      
















    return 0;
}