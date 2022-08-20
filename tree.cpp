#include<bits/stdc++.h>

using namespace std;

int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 // Binary to Decimal
    long long int  x;
    cin>>x;
    long long int res=0;
     int i=0;
    while(x!=0)
    {
       res+=(x%10)*pow(2,i);
       i++;
       x/=10;
    }

  cout<<res<<endl;



    return 0;
}

