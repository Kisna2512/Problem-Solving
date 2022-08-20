#include<bits/stdc++.h>

using namespace std;

class Solution {
public:
    int myAtoi(string str) {
        if(str.empty())
            return 0;
        int len=str.length(),i=0,sign=1;
        while(i<len && str[i]==' '){
            i++;
        if(i==len)
            return 0;
        if(str[i]=='-')
        {  
            sign=0;
            i++;
        }
        else if(str[i]=='+')
        {
            i++;
        }
      }
        long int out=0;
        while(str[i]>='0' && str[i]<='9')
        {
            out=out*10;
            if(out<=INT_MIN || out>=INT_MAX)
                break;
            out=out+(str[i]-'0');
            i++;
        }
        if(sign==0)
            out=-1*out;
        if(out>=INT_MAX)
            return INT_MAX;
        if(out<=INT_MIN)
            return INT_MIN;
        return (int)out;
    }
};







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
    	// string s;
    	// cin>>s;

    	// if(caseInSensStringCompare(s,"YES")==true)
    	// {
    	// 	cout<<"YES"<<endl;
    	// }
    	// else
    	// {
    	// 	cout<<"NO"<<endl;
    	// }




    // Second Question
    //   int n;
    //   cin>>n;
    //   string str;
    //   cin>>str;
    
    // int score=0;
    
    //   unordered_map<char,int> mp;
    //   for(int i=0;i<n;i++)
    //   {
    //   	if( mp.find(str[i])==mp.end())
    //   	{
    //   		score+=2;
    //       mp[str[i]]++;
    //   	}else
    //   	{
    //   		 score+=1;
    //   	}

    	// Third Question

       




      }

      // for(int i=0;i<n;i++)
      // {
      // 	if(!flag)
      // 	{

      // 	}
      // }

      // for(auto it:mp)
      // {
      // 	if(flag==false)
      // 	{
      // 		score+=2;
      // 		flag=true;
      // 	}
      // 	if(it.second==1)
      // 	{
      // 		score+=2;
      // 	}
      	
      // 		score+=1;
      	
   
      // }

      // while(i < n)
      // {
      // 	if(flag==false)
      // 	{
      // 		score+=2;
      // 		flag=true;
      // 	}
      // 	if(mp[s[i]]==1)
      // 	{

      // 	}
      // }



    // cout<<score<<endl;



     int n;
     cin>>n;

     



















    }




    return 0;
}