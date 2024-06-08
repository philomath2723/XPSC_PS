#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    set<ll> s[n];
    set<ll> myset;
    for (ll i = 0; i < n; i++)
    {
        ll m;
        cin >> m;
        for (ll j = 0; j < m; j++)
        {
            ll x;
            cin >> x;
            myset.insert(x);
            s[i].insert(x);
        }
    }

    ll ans = 0;
    while (!myset.empty())
    {
        ll x = *(myset.begin());
        myset.erase(myset.begin());
        set<ll> up_set;
        for (ll j = 0; j < n; j++)
        {
            if (s[j].find(x) == s[j].end())
                up_set.insert(s[j].begin(), s[j].end());
        }
        ll m = up_set.size();
        ans = max(ans, m);
    }
    cout << ans << endl;
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