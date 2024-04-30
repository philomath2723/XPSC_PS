#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n;
    cin >> n;

    for (ll i = 1; i * i * i < n; i++)
    {
        ll a = n - (i * i * i);
        ll l = 1, r = 1e5;
        while (l <= r)
        {
            ll mid = (l + r) / 2;
            ll b = mid * mid * mid;
            if (b == a)
            {
                cout << "YES" << '\n';
                return;
            }
            else if (b > a)
                r = mid - 1;
            else
                l = mid + 1;
        }
    }

    cout << "NO" << '\n';
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