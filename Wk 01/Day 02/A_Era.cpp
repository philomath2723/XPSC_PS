#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll a[n + 1];
    a[0] = 0;
    for (ll i = 1; i <= n; i++)
        cin >> a[i];
    ll ans = 0, curri = 1;
    for (ll i = 1; i <= n; i++)
    {
        if (curri < a[i])
        {
            ll diff = a[i] - curri;
            ans += diff;
            curri += diff;
        }
        curri++;
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