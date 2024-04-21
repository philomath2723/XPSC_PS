#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    ll ck = 0, n = s.size() / 2;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
            ck++;
    }
    if (ck >= 1)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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