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
    vector<ll> bit;
    for (ll i = 0; i < 31; i++)
    {
        ll element = 0;
        for (ll j = 0; j < n; j++)
        {
            if (((1 << i) & a[j]))
                element++;
        }
        bit.push_back(element);
    }
    for (ll i = 1; i <= n; i++)
    {
        bool ok = true;
        for (ll j = 0; j < 31; j++)
        {
            if (bit[j] % i != 0)
            {
                ok = false;
                break;
            }
        }
        if (ok)
            cout << i << " ";
    }
    cout << '\n';
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