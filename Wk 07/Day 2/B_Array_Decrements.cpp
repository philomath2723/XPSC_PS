#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll a[n], b[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < n; i++)
        cin >> b[i];
    ll diff = INT_MIN;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            cout << "NO" << '\n';
            return;
        }

        diff = max(diff, a[i] - b[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] - b[i] < diff && b[i] != 0)
        {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
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