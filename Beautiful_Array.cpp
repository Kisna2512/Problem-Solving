#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

 int t;
    cin >> t;
    while (t--) {
        ll n, x, s, q;
        cin >> n >> x >> s >> q;
        vector <ll> a(n);
        a[0] = x * s;
        q -= x * s;
        if (q < 0) cout << "-1\n";
        else {
            for (int i = 0; i < n; ++i) {
                int now = min(x - 1, q);
                a[i] += now;
                q -= now;
            }
            if (q > 0) cout << "-1\n";
            else {
                for (int i = 0; i < n; ++i) cout << a[i] << " ";
                cout << "\n";
            }
        }
    }


   











    return 0;
}