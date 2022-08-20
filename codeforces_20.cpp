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

long long int a,b,n;
 
    while(t--)
    {
        
        long long int sum = 0,c = 0;
        cin>>a>>b>>n;
        while(sum <= n){
            if(a > b){
                b += a;
                sum = b;
                c++;
            }
            else{
                a += b;
                sum = a;
                c++;
            }
            if(sum > n){
                break;
            }
        }
        cout<<c<<endl;
    }


    return 0;
}