#include<bits/stdc++.h>

using namespace std;

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
	int n,h,m;
	cin>>n>>h>>m;
 
 
    int res=0,ans=0;
       
       for(int i=0;i<n;i++)
       {

             int h1,m1;
             cin>>h1>>m1;

           res=h1-h;
           ans=m1-m;

         if(ans > 0)
         {
         	res=24-res;
         }

         if(ans > 59)
         {
         	res+=1;
         }

           if(res < 0)
           {
           	 res+=24;
          
           }
            if(ans < 0)
           {
            	ans+=60;
           	    res-=1;
           }

       }

 

        
    	// if(h_==h && m_==m)
    	// {
    	// 	cout<<0<<" "<<0<<endl;
    	// 	break;
    	// }
    	// else
    	// {

    		
    			
    	// 		if(h_ > 23)
    	// 		{
    	// 			h_=24-h_;

    	// 		}
    	// 		if(m_ > 59)
    	// 		{
    	// 			m_=60-m_;
    	// 		}
    	// 		h=(h_-h);
    	// 		if(h < 0)
    	// 		{
    	// 			h=abs(h-(h+1));
    	// 		}
    		
    		
    		
    	// }


    
    cout<<res<<" "<<ans<<endl;

}












    return 0;
}