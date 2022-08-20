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



    int n;
    cin>>n;

    int arr[n];
    for (int i = 1; i <= n; i++)
    {
    	cin>>arr[i];

    }
     int arr2[n]={0};
    for (int i = 1; i <= n; i++)
    {
         arr2[arr[i]]=i;
    }

   for (int i = 1; i <= n; i++)
   {
   	  cout<<arr2[i]<<" ";
   }













    return 0;
}