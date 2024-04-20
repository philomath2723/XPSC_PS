#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll preSum[n];
    preSum[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        preSum[i] = a[i] + preSum[i - 1];
    }
    ll q;
    cin >> q;
    while (q--)
    {
        ll key;
        cin >> key;
        auto it = lower_bound(preSum, preSum + n, key);
        cout << it - preSum + 1 << '\n';
        // ll l = 0, r = n - 1, ans = 0;
        // while (l <= r)
        // {
        //     ll mid = (l + r) / 2;
        //     if (key <= preSum[mid])
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
    return 0;
}