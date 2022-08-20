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
    	string str;
    	cin>>str;
    	int cnt=0;
    	for(int i=0;i<str.size();i=i+2)
    	{
    		
    			if(str[i]!=str[i+2]);
    			{
    				cnt++;
    			}
    		

    	}



   // unordered_map<char,int> mp;
   // for(int i=0;i<str.size();i++)
   // {
   // 	mp[str[i]]++;
   // }

   // for(auto it: mp)
   // {
   // 	if(it.second >)
   // 	{
   // 		cnt++;
   // 	}


   // }
    	cout<<cnt<<"\n";
    }



    return 0;
}