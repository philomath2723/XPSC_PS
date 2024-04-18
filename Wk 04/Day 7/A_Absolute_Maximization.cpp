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
    ll big_or = a[0], small_and = a[0];
    for (ll i = 1; i < n; i++)
    {
        big_or |= a[i];
        small_and &= a[i];
    }
    cout << (big_or - small_and) << '\n';
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