#include<bits/stdc++.h>

using namespace std;

int No_ways(int k,int n,int g)
{
	int cnt=1;
	if(n > k)
	{
		return 0;
	}
	if(g >= n)
	{
		return 0;
	}
	
	return No_ways()
}



int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


int k;
cin>>k;

int n;
cin>>n;

int g;
cin>>g;

int cnt=0;
cout<<No_ways(k,n,g)<<endl;







    return 0;
}