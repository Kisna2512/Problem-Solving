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

int arr[n];
for (int i = 0; i < n; i++)
{
	cin>>arr[i];
}

int cnt=1;
int max=1;
for(int i=1;i<n;i++)
{
	if( arr[i] > arr[i-1])
	{
		cnt++;
	}
	else
	{
		if(cnt > max)
		{
			max=cnt;
			
		}
		cnt=1;
	}

}
if(cnt > max)
{
	max=cnt;
}
cout<<max<<"\n";











    return 0;
}