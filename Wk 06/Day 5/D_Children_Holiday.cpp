#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll m, n;
    cin >> m >> n;
    ll t[n], z[n], y[n], mn = 1e18;

    for (ll i = 0; i < n; i++)
    {
        cin >> t[i] >> z[i] >> y[i];
        mn = min(mn, t[i]);
    }

    if (m == 0)
    {
        cout << "0" << endl;
        for (ll i = 0; i < n; i++)
            cout << "0 ";
        cout << endl;
        return;
    }

    ll l = 0, r = 1e7, ans = 0, v[n];
    while (l <= r)
    {
        ll mid = (l + r) / 2, total = 0;
        for (ll i = 0; i < n; i++)
        {
            ll time_with_rest = t[i] * z[i] + y[i];
            ll inf_baloon = (mid / time_with_rest) * z[i] + min((mid % time_with_rest) / t[i], z[i]);
            v[i] = inf_baloon;
            total += inf_baloon;
        }
        if (total >= m)
        {
            ans = mid;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }

    cout << ans << '\n';
    ll ttl = 0;
    for (ll i = 0; i < n; i++)
    {
        if (ttl < m)
        {
            ll time_with_rest = t[i] * z[i] + y[i];
            ll inf_baloon = (ans / time_with_rest) * z[i] + min((ans % time_with_rest) / t[i], z[i]);

            if (ttl + inf_baloon > m)
            {
                v[i] = m - ttl;
                ttl = m;
                cout << v[i] << " ";
            }
            else
            {
                v[i] = inf_baloon;
                ttl += inf_baloon;
                cout << v[i] << " ";
            }
        }
        else
        {
            v[i] = 0;
            cout << v[i] << " ";
        }
    }
    cout << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    t = 1;
    while (t--)
        solve();
    return 0;
}