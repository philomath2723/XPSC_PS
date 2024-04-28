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

    sort(a, a + n);
    ll l = 1, r = (n + 1) / 2, ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        bool ok = true;
        ll i = mid - 1, j = 1;
        while (i < 2 * mid - 1)
        {
            if (a[i] > j)
            {
                ok = false;
                break;
            }
            i++;
            j++;
        }

        if (ok)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
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