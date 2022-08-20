#include<bits/stdc++.h>

using namespace std;

int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

string s,str;
cin>>s;

for(int i=0;i<5;i++)
{
	
	cin>>str;
	if(str[0]==s[0] || str[1]==s[1])
	{
		cout<<"YES"<<"\n";
		return 0;
	}
}

cout<<"NO"<<"\n";

    return 0;
}