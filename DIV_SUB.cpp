#include<bits/stdc++.h>

using namespace std;


void generate(vector<pair<int,int>> v,vector<int> &arr,int i,int n )
{
   
   	 if(i > n-1)
    {
    	int sum=0;
    	for(int i=0;i<v.size();i++)
    	{
    		sum+=v[i].second;
    	}

    	if(sum%n==0 )
    	{
    		// cout<<"Size: "<<v.size()<<endl;
    		// cout<<"Index: ";
    		if(v.size()!=0)
    		{
              cout<<v.size()<<endl;
    		}
    		
    		for(auto it:v)
    		{
    			
    				cout<<(it.first+1)<<" ";
    			
    			
    		}cout<<endl;

    	}

    	
    	 return;
    }
   
    v.push_back({i,arr[i]});
    generate(v,arr,i+1,n);
    v.pop_back();

   generate(v,arr,i+1,n);

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
   vector<int> arr;
   for(int i=0;i<n;i++)
   {
   	int x;
   	cin>>x;
   	arr.push_back(x);
   }
   
   vector<pair<int,int>> v;
   generate(v,arr,0,n);
}

    return 0;
}