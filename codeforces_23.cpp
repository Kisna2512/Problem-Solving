#include<bits/stdc++.h>

using namespace std;

int sum_1(int n)
{
	return (n*(n+1)/2);
}



int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

int n;
cin>>n;

int level=0;
while(1)
{
	n-=sum_1(level+1);
	if( n >= 0) level++;
	else break;
}
cout<<level<<endl;




    return 0;
}
