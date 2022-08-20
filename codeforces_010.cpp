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

int sum=0;
for (int i = 0; i < n; i++)
{
	int a;
	cin>>a;
	sum+=a;

}


if(sum >= 1)
{
	cout<<"HARD"<<endl;
}
else
{
	cout<<"EASY"<<endl;
}


    return 0;
}