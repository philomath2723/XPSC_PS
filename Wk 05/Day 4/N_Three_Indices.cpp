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
    stack<pair<ll, ll>> i_less, j_less;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (!j_less.empty())
        {
            if (a[i] <= j_less.top().first)
                j_less.push({a[i], i});
        }
        else
        {
            j_less.push({a[i], i});
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (!j_less.empty())
        {
            if (a[i] == j_less.top().first)
                j_less.pop();
        }

        if (!i_less.empty() && !j_less.empty())
        {
            if (a[i] > i_less.top().first && a[i] > j_less.top().first)
            {
                cout << "YES" << '\n';
                cout << ++i_less.top().second << " " << ++i << " " << ++j_less.top().second << '\n';
                return;
            }
        }

        if (!i_less.empty())
        {
            if (a[i] <= i_less.top().first)
                i_less.push({a[i], i});
        }
        else
        {
            i_less.push({a[i], i});
        }
    }
    cout << "NO" << '\n';
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