#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll a, b, n;
    cin >> a >> b >> n;
    ll ar[n], ans = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> ar[i];
        ans += min(1 + ar[i], a);
        b--;
    }
    cout << ans + b << '\n';
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