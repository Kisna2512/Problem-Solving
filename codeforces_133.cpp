#include<bits/stdc++.h>

using namespace std;


int fun(int ans,int n,int cnt)
{

	
		if(ans==n)
		{
			cnt++;
			return 0;
		}
		else
		{
			return 0;
		}
	    
    
     if(n > 0)
     {
     	ans=fun(ans,n-2,cnt)+fun(ans,n-3,cnt);
     }
     else if(n < 0)
     {
     	ans=fun(ans,n+3,cnt)+
     	fun(ans,n+2,cnt);
     }
return ans;



   // cnt=min(cnt,1+fun(n-2,cnt,mini)+fun(n-3,cnt,mini)+fun(n+2,cnt,mini)+fun(n+3,cnt,mini));
  

}







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
 	int n;
 	cin>>n;


    int cnt=0;
    int ans=0;
   cout<< fun(n,cnt,ans)<<endl;
   


  //  int mini=0;
  // int ans=0;
  // int i=0;
  //  while( ans!=n)
  //  {
  //  	if(ans < n)
  //  	{
   	 	
  //    ans+=2;
  //  	 ans=ans+3;
  //  	}

  //  	else if(ans > n)
  //  	{
  //  	 ans=ans-3;
  //  	  ans-=2;
   		
  //  	}
   	
   	 
  //  mini++;
   	 
   	 
  //  }


  //  cout<<mini<<endl;







 }














    return 0;
}