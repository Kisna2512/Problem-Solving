#include<bits/stdc++.h>

using namespace std;

int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

 int n;
 cin>>n;

int max_val=0;
int min_vale=110;
int maxi=0,mini=0;
for (int i = 1; i <= n; i++)
{
	int a;
	cin>>a;
	if( a> max_val)
	{
		maxi=i;
		max_val=a;
	}
	if(a < min_vale)
	{
		mini=i;
		min_vale=a;
	}
}
if(maxi > mini)
{
	cout<<(maxi-1)+(n-mini)-1<<"\n";
}
else
{
	cout<<(maxi-1)+(n-mini)<<"\n";
}

    return 0;
}