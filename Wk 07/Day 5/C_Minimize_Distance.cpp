#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n], neg = 0, pos = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
            neg++;
        else
            pos++;
    }
    sort(a, a + n);
    ll res = 0;

    for (ll i = 0; i < neg; i += k)
    {
        res += 2 * (abs(a[i]));
    }
    for (ll i = n - 1; i >= neg; i -= k)
    {
        res += 2 * (abs(a[i]));
    }

    if (abs(a[0]) > abs(a[n - 1]))
        res -= abs(a[0]);
    else
        res -= abs(a[n - 1]);
    cout << res << '\n';
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