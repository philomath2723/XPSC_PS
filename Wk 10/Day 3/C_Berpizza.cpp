#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;

using namespace __gnu_pbds;
template <typename T>
using PBDS = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

ll i = 1;
PBDS<pair<ll, ll>> poly;
PBDS<pair<ll, ll>> mono;
map<ll, ll> mp;
void solve()
{
    ll way;
    cin >> way;
    if (way == 1)
    {
        ll cost;
        cin >> cost;
        poly.insert({cost, i});
        mono.insert({i, cost});
        mp[cost]++;
        i++;
    }
    else if (way == 2)
    {
        auto it = mono.begin();
        cout << it->first << " ";
        poly.erase({it->second, it->first});
        mono.erase(mono.begin());
    }
    else
    {
        auto it = --poly.end();
        ll n = poly.size();
        it = poly.find_by_order(n - mp[it->first]);
        mp[it->first]--;

        cout << it->second << " ";
        mono.erase({it->second, it->first});
        poly.erase(it);
    }
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