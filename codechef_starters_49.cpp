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
  // First Question
/*
  Codechef
  int n;
  cin>>n;
  string s;
  cin>>s;
  string r;
  cin>>r;

   int cnt_one=0;
   int cnt_zero=0;

    for(int i=0;i<s.size();i++)
    {
    	if(s[i]!=r[i])
    	{
    		cnt_one++;
    	}
    	
    }

   if(cnt_one%2==0)
   {
   	cout<<1<<endl;
   }
   else
   {
   	cout<<0<<endl;
   }
*/

// int cnt_one_r=0;
//    int cnt_zero_r=0;

//     for(int i=0;i<r.size();i++)
//     {
//     	if(r[i]=='1')
//     	{
//     		cnt_one_r++;
//     	}
//     	else
//     	{
//     		cnt_zero_r++;
//     	}
//     }


   // if(cnt_one_r%2==0 && cnt_zero%2==0)
   // {
   // 	  cout<<"1"<<endl;
   // }
   // else
   // {
   // 	cout<<"0"<<endl;
   // }



 // Second Question 
 int x,y,z;
 cin>>x>>y>>z;


 int ans=min(x,min(y,z));

if(x%ans==0 && y%ans==0 && z%ans==0)
{
   cout<<"YES"<<endl;
}
else
{
	cout<<"NO"<<endl;
}

















}




















    return 0;
}