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
    ll l = 0, r = a[n - 1] - a[0], ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;

        ll to_find = a[0] + mid;
        auto it = upper_bound(a, a + n, to_find);
        ll set1_last_index = it - a;

        to_find = a[set1_last_index] + mid;
        it = upper_bound(a, a + n, to_find);
        ll set2_last_index = it - a;

        to_find = a[set2_last_index] + mid;
        it = upper_bound(a, a + n, to_find);
        ll set3_last_index = it - a;

        if (set1_last_index == n || set2_last_index == n || set3_last_index == n)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    cout << (ans + 1) / 2 << '\n';
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