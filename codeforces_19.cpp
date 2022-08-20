#include<bits/stdc++.h>

using namespace std;

int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif



  string s;
	char a[100];
	cin >> s;
	int j = 0;
	for (int i = 0;i < s.length();i++)
	{
		if (s[i] != '+')
		{
			a[j] = s[i];
			j++;
		}
	}
	sort(a, a + j);
	for (int i = 0;i < j;i++)
	{
		if (i == j - 1) cout << a[i] << endl;
		else cout << a[i] << "+";
	}




    return 0;
}