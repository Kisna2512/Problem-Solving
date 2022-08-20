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
	 int capacity=0;
	 int stillnow=0;
	 for(int i=0;i<n;i++){
		 int a,b;
		 cin>>a>>b;
		 stillnow-=a;
		 stillnow+=b;
		 capacity=max(capacity,stillnow);

	 }
	 cout<<capacity;

    return 0;
}