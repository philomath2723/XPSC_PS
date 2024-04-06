#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x = 1, range = 0;
        while (x <= a[i])
        {
            x *= 2;
            range++;
        }
        if (mp[range] > 0)
            ans += mp[range];
        mp[range]++;
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