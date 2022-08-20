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
   	int n;
    cin>>n;

    int pw=1;
    std::vector<int> v;
    while(n)
    {
    	if(n%10)
    	{
    		v.push_back((n%10)*pw);
    	}
    	n/=10;
    	pw*=10;
    }
  
   cout<<v.size()<<"\n";
   for(int i: v)
   {
   	cout<<i<<" ";
   }
cout<<endl;



   }


















    return 0;
}