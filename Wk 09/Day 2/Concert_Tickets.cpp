#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < m; i++)
        cin >> b[i];
    sort(a, a + n);
    bool sold[n];
    memset(sold, false, sizeof(sold));
    for (ll i = 0; i < m; i++)
    {
        auto it = upper_bound(a, a + n, b[i]);

        ll l = it - a - 1;
        while (l >= 0 && sold[l])
        {
            l--;
        }
        if (l >= 0)
        {
            cout << a[l] << '\n';
            sold[l] = true;
        }
        else
        {
            cout << "-1" << '\n';
        }
    }

    return 0;
}