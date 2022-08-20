#include<bits/stdc++.h>

using namespace std;

int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

int x1,x2,x3;
cin>>x1>>x2>>x3;



int dis1=abs(x1-x2);
int dis2=abs(x1-x3);
int dis3=abs(x2-x3);

int maxi=max(dis1,max(dis3,dis2));
cout<<maxi<<endl;




    return 0;
}