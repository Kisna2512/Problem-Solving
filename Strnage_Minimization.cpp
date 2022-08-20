#include<bits/stdc++.h>

using namespace std;


long fun(vector<int> &A,vector<bool> &vis,int i,int stsum,int B)
{
	if(i>A.size())
	{
		if(B==0)
	   {
         return stsum;
	    }
	}

	for(int j=i;j<A.size();j++)
	{
		
       if(!vis[j])
       {
       	vis[j]=true;
       	stsum=pow(stsum+A[i],2);
       	 stsum=min(stsum,fun(A,vis,i+1,stsum,B-1));
       	vis[j]=false;
       }
	}

	return 0;
	
}



long solve(vector<int> &A,int B)
{
	vector<bool> vis;
    return fun(A,vis,0,0,B);
}









int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    int A;
    cin>>A;

   
   vector<int> B(A,0);
   for(int i=0;i<A;i++)
   {
   	cin>>B[i];
   }
  

cout<<solve(B,1);

















    return 0;
}