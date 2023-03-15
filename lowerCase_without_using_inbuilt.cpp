#include <bits/stdc++.h>
using namespace std;

string toLowerCase(string s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= 65 && s[i] <= 90)
        {
            s[i] = s[i] - 'A' + 97;
        }
    }
    return s;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    cout << toLowerCase(s) << endl;

    return 0;
}