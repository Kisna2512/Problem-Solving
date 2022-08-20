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
	
	int n,cnt_odd=0,cnt_even=0,sum=0;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin>>arr[i];
		sum+=arr[i];
		if(arr[i] & 1) cnt_odd++;
		else cnt_even++;
	}
	if(sum & 1)
	{

		cout<<cnt_even<<"\n";
		continue;
	}
	cout<<min(cnt_odd/2,cnt_even)<<endl;
}




    return 0;
}