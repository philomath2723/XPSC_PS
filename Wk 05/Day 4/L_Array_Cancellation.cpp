#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll a[n], left = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        left += a[i];
        if (left < 0)
            left = 0;
    }
    cout << left << '\n';
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