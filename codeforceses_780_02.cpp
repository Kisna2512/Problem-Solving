#include<bits/stdc++.h>

using namespace std;
int mod=1e9+7;


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
	long long int n;
	cin>>n;
	vector<long long int> v;
	for(int i=0;i<n;i++)
	{
		long long int x;
		cin>>x;
		v.push_back(x);
	}
	long long int  sum=0;
	for(int i=0;i<n;i++)
	{
		sum=(sum+v[i])%mod;
	}
	if(sum==0)
	{
		cout<<"YES"<<"\n";
	}
	else if((sum%mod) & 1)
	{
       cout<<"YES"<<"\n";
	}
	else
	{
		cout<<"NO"<<"\n";
	}
}


    return 0;
}