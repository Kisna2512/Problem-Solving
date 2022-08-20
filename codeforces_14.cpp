#include<bits/stdc++.h>

using namespace std;

int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

  long long int n;
  cin>>n;
  int k;
  cin>>k;

// long long int sub=0;


while(k--)
{
	if(n%10!=0)
	{
       n=n-1;
	}
	else
	{
		n/=10;
	}
}


cout<<n<<"\n";



    return 0;
}