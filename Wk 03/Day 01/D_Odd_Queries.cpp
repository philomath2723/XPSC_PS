#include <bits/stdc++.h>
#define ll long long
#define pii pair<ll, ll>
using namespace std;
void solve()
{
    ll n, q;
    cin >> n >> q;
    ll preSum[n + 1];
    preSum[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        preSum[i] = preSum[i - 1] + x;
    }

    while (q--)
    {
        ll l, r, k;
        cin >> l >> r >> k;
        ll qSum = preSum[r] - preSum[l - 1];
        ll new_qSum = (r - l + 1) * k;
        if ((preSum[n] - (qSum - new_qSum)) % 2 == 1)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
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