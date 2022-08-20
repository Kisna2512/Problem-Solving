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
    	// codeforces question first
    	// long long int m;
    	// cin>>m;

      
     //   	 int k=0;
     //   	 long long int res=m;
     //   	 while(m!=0)
     //   	 {
     //   	 	m=m/10;
     //   	 	k++;
     //   	 }
     //   	 // cout<<"k for: "<<k<<endl;
     //      k=k-1;
     //      long long int  ans=res-(pow(10,k));
     //     cout<<ans<<endl;


    	// question second
    	string s;
    	cin>>s;
    	unordered_map<char,int> mp;
         int size=0;
         int ans=0;
         int n=s.size();
         int i=0;
         while(i < n)
         {
         	if(mp.find(s[i])==mp.end()) size++;
         	mp[s[i]]++;
         	// while(i+1 < n and mp.find(s[i+1])!=mp.end()) i++;
         	i++;
         	if(size==3)
         	{
         		ans++;
         		size=0;
         		mp.clear();
         	}
         }
    	// for(int i=0;i<s.size();i++)
    	// {
    		

             
     //         if(mp.find(s[i])==mp.end())
     //         {
     //            size++;
     //         }

     //          mp[s[i]]++;

     //          if(size==3)
     //          {
     //          	ans++;
     //          	size=0;
     //          	mp.clear();
     //          }








    	// }
    	if(size > 0)
    	{
    		ans++;
    	}
    	cout<<ans<<endl;

    	// int size=mp.size();
    	// int ans;
    	// if(size%3==0)
    	// {
     //      ans=(size/3)+1;
    	// }
    	// else
    	// {
    	// 	ans=(size/3)+1;
    	// }

     //  cout<<ans<<endl;
    	// int n=s.size();
     //    int k=0;
     // for(int i=0;i<n;i++)
     // {
     // 	while(k <= 3 mp[s[i]])
     // 	{
     // 		k++;
     // 	}
     // }
       






    }







    return 0;
}