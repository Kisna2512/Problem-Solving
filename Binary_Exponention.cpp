#include<bits/stdc++.h>

using namespace std;



int powerfun(int a,int b)
{
	int res=1;
    
    while(b)
    {
    	if(b&1)
    	{
    		res*=a;
    	
    	}
    	a*=a;
    	b=b>>1;
    }
 

    return res;




}


int main()
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