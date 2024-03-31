#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n, k, q;
    cin >> n >> k >> q;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll ans = 0, l = 0, r = 0;
    while (r < n)
    {
        if (a[r] <= q)
        {
            if (r - l + 1 >= k)
            {
                ans += r - l - k + 2;
            }
            r++;
        }
        else
        {
            r++;
            l = r;
        }
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