#include<bits/stdc++.h>

using namespace std;

int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif



string n;
cin>>n;

unordered_set<char> v;
for (int i = 0; i < n.size(); i++)
{
	v.insert(n[i]);
}

int k=v.size();

if(k%2==0)
{
	cout<<"CHAT WITH HER!"<<endl;
}
else
{
	cout<<"IGNORE HIM!"<<endl;
}











    return 0;
}