#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n, m, h;
    cin >> n >> m >> h;
    ll a[n], b[m];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < m; i++)
        cin >> b[i];

    sort(a, a + n, greater<int>());
    sort(b, b + m, greater<int>());
    ll ans = 0;
    for (ll i = 0; i < min(n, m); i++)
    {
        ll wh = b[i] * h;
        ans += min(wh, a[i]);
    }
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