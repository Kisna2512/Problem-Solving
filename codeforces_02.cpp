#include<bits/stdc++.h>


#define ll long long int
#define F first
#define S second
#define pb push_back
#define pp pop_back

using namespace std;

int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


ll x;


	cin>>x;
	

ll y=0;
int i=0;





while(x>0)
{
	

	int t=x%10;
	if(x/10 <= 0 and t==9)
	{
		t==t;
	}
	else if((9-t)<t)
	{
		t=9-t;
	}
	y+=pow(10,i)*t;

	i++;
	x/=10;
}

cout<<y<<endl;



    return 0;
}