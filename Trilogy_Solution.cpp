#include<bits/stdc++.h>

using namespace std;

long Solution::fac(long n)
{
 
   if(n==0)
   {
   	return 1;
   }

return n*fac(n-1);

}

long  Solution :: solve(int A,vector<vector<int>> &B)
{

    

	unordered_map<int,int> mp;
	 for(int i=0;i<n;i++)
       {
       	for(int j=0;j<n;j++)
       	{
       		
       		mp[B[i][j]]++;
       	}

       }
 long m=mp.size();
       if(m==2)
       {
       	return 1;
       }
       else if(m >= 3)
       {
         return fac(m);
       }

}


int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
      
      int n;
      cin>>n;

      vector<vector<int>> mat(n,vector<int>(n,0));
      unordered_map<int,int> mp;
       for(int i=0;i<n;i++)
       {
       	for(int j=0;j<n;j++)
       	{
       		cin>>mat[i][j];
       		mp[mat[i][j]]++;
       	}

       }

       int m=mp.size();
       if(m==2)
       {
       	cout<<1<<endl;
       }
       else if(m >= 3)
       {
         cout<<fac(m)<<endl;
       }











    return 0;
}