#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, l, r, x;
    cin >> n >> l >> r >> x;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll ans = 0;
    for (ll i = 0; i < (1 << n); i++)
    {
        ll sum = 0, mn = 1e18, mx = -1;
        for (ll j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum += a[j];
                mn = min(mn, a[j]);
                mx = max(mx, a[j]);
            }
        }
        if (sum >= l && sum <= r && (mx - mn >= x))
            ans++;
    }
    cout << ans << '\n';
    return 0;
}