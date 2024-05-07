#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll a[n + 1] = {0};
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x <= n)
            a[x]++;
    }

    ll ans[n + 1] = {0};
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = i; j <= n; j += i)
            ans[j] += a[i];
    }
    sort(ans, ans + n + 1);
    cout << ans[n] << '\n';
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