#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll a[n], sum = 0, mn = INT_MAX, neg = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
            neg++;
        sum += abs(a[i]);
        mn = min(mn, abs(a[i]));
    }
    if (neg % 2 == 0)
        cout << sum << '\n';
    else
        cout << sum - 2 * mn << '\n';
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