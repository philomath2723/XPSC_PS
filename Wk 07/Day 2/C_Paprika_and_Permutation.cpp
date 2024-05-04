#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll a[n], ops = 0;
    map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] <= n)
            mp[a[i]]++;
    }

    sort(a, a + n);
    vector<ll> missing;
    for (ll i = 0; i < n; i++)
    {
        if (mp[i + 1] == 0)
            missing.push_back(i + 1);
    }
    vector<ll> extra;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > n || mp[a[i]] > 1)
        {
            extra.push_back(a[i]);
            mp[a[i]]--;
        }
    }

    for (ll i = 0; i < missing.size(); i++)
    {
        if (missing[i] * 2 >= extra[i])
        {
            cout << "-1" << '\n';
            return;
        }
    }
    cout << extra.size() << '\n';
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