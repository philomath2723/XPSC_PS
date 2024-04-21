#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    string a, b;
    cin >> a >> b;
    ll common = 0;
    for (ll i = min(a.size(), b.size()); i >= 0; i--)
    {
        bool ok = false;
        for (ll j = 0; j <= a.size() - i; j++)
        {
            string ck = a.substr(j, i);
            if (b.find(ck) != string::npos)
            {
                // cout << ck << " " << i << endl;
                common = i;
                ok = true;
                break;
            }
        }
        if (ok)
            break;
    }
    ll ans = a.size() + b.size() - 2 * common;
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}