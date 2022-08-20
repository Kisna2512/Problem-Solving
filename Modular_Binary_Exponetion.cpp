#include<bits/stdc++.h>
#define int long long int
using namespace std;

int mod=1e9+7;

int powerfun(int a,int b)
{
	int res=1;
    
    while(b)
    {
    	if(b&1)
    	{
    		res*=a;
    		res%=mod;

    	
    	}
    	a*=a;
    	a%=mod;
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

int a,b;
   cin>>a>>b;

   cout<<powerfun(a,b)<<endl;


    return 0;
}