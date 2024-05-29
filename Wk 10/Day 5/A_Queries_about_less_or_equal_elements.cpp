#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
template <typename T>
using PBDS = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    PBDS<ll> a;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.insert(x);
    }

    ll b[m];
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
        cout << a.order_of_key(b[i] + 1) << " ";
    }

    return 0;
}