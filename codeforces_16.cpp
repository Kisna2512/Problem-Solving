#include<bits/stdc++.h>

using namespace std;

int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


int a,b;
cin>>a>>b;

// a*3
// b*2

// a<= b
int cnt=0;
if(a > b)
{
	cout<<0<<endl;
}
for(int i=0;i<b;i++)
{
	
	if(a <= b)
	{
		a=a*3;
	    b=b*2;
	    cnt++;
	}
}

cout<<cnt<<"\n";









    return 0;
}