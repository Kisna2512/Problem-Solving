#include<bits/stdc++.h>

using namespace std;

int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

   int n,m;
   cin>>n>>m;
   int res=-1;
   if(m > n)
   {
   	
   	res=-1;
   }
   else
   {
   	
   	if(n%2)
   	{
   		res=n/2+1;
   	}
   	else
   	{
   		res=n/2;
   	}

   	while(res%m > 0)
   	{
   		res++;
   	}


   }
   cout<<res<<endl;


    return 0;
}