#include <bits/stdc++.h>
#define ll long long
#define pii pair<ll, ll>
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    ll x_or = a[n - 1];
    ll ans = 1;
    ll k = 0, j = n - 1;
    while (k < j)
    {
        if (x_or >= a[k])
        {
            x_or ^= a[k];
            k++;
        }
        else
        {
            ans++;
            j--;
            x_or = a[j];
        }
    }
    cout << ans << '\n';
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