#include <bits/stdc++.h>
#define ll long long
#define pii pair<ll, ll>
using namespace std;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n], sum1 = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum1 += a[i];
    }
    sort(a, a + n);
    reverse(a, a + n);
    ll preSum[n];
    preSum[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        preSum[i] = a[i] + preSum[i - 1];
    }
    while (k--)
    {
        ll key;
        cin >> key;
        auto it = lower_bound(preSum, preSum + n, key);
        if (it - preSum != n)
            cout << it - preSum + 1 << '\n';
        else
            cout << "-1" << '\n';
        // ll l = 0, r = n - 1, ans = -1;
        // while (l <= r)
        // {
        //     ll mid = (l + r) / 2;
        //     if (preSum[mid] >= key)
        //     {
        //         ans = mid + 1;
        //         r = mid - 1;
        //     }
        //     else
        //     {
        //         l = mid + 1;
        //     }
        // }
        // cout << ans << '\n';
    }
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