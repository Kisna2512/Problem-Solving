#include<bits/stdc++.h>

using namespace std;

int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

int n,k,l,c,d,p,nl,np;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;

int first=(l*k)/nl;
int second=(c*d);
int third=(p/(np));


cout<<min(first,min(second,third))/n<<endl;


    return 0;
}