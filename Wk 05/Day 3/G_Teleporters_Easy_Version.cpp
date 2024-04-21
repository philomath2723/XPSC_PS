#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n, c, ans = 0;
    cin >> n >> c;
    ll a[n], res[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        res[i] = i + a[i] + 1;
    }
    sort(res, res + n);
    for (ll i = 0; i < n; i++)
    {
        if (res[i] <= c)
        {
            ans++;
            c -= res[i];
        }
        else
            break;
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