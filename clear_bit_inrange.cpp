#include<bits/stdc++.h>


#define ll long long int
#define F first
#define S second
#define pb push_back
#define pp pop_back



using namespace std;

void clearinrange(int &n,int i,int j)
{
	int a=(~0)<<(j+1);
	int b=(1<<i)-1;
	int mask=a|b;
	n= n& mask;

}










int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin>>n;
    int i=1;
    int j=3;
    clearinrange(n,i,j);
    cout<<n<<"\n";

 

    return 0;
}