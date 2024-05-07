#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll ans = INT_MIN;
    for (ll i = 1; i <= n; i++)
    {
        ll frog = 0;
        for (ll j = 0; j < n; j++)
        {
            if (i % a[j] == 0)
                frog++;
        }
        ans = max(ans, frog);
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