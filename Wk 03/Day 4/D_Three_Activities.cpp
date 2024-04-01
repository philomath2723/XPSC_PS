#include <bits/stdc++.h>
#define ll long long
#define pii pair<ll, ll>
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    pair<ll, ll> a[n], b[n], c[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i].first;
        b[i].second = i;
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> c[i].first;
        c[i].second = i;
    }
    sort(a, a + n);
    sort(b, b + n);
    sort(c, c + n);
    ll ans = -1;
    for (ll i = n - 1; i > n - 4; i--)
    {
        for (ll j = n - 1; j > n - 4; j--)
        {
            for (ll k = n - 1; k > n - 4; k--)
            {
                if (a[i].second != b[j].second && a[i].second != c[k].second && b[j].second != c[k].second)
                {
                    ans = max(ans, a[i].first + b[j].first + c[k].first);
                }
            }
        }
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}