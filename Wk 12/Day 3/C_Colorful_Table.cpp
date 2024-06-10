#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n], ans[k + 1] = {0}, left[k + 1], right[k + 1];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (ll i = 0, j = 0; i < n; i++)
    {
        while (j <= a[i])
        {
            left[j] = i;
            j++;
        }
    }
    for (ll i = n - 1, j = 0; i >= 0; i--)
    {
        while (j <= a[i])
        {
            right[j] = i;
            j++;
        }
    }

    for (ll i = 0; i < n; i++)
    {
        ans[a[i]] = max(2 * (right[a[i]] - left[a[i]] + 1), ans[a[i]]);
    }

    for (ll i = 1; i <= k; i++)
        cout << ans[i] << " ";
    cout << endl;
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