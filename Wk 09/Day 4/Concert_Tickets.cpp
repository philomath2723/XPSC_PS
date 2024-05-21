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
    ll b[m];
    multiset<ll> a;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        a.insert(z);
    }

    for (ll i = 0; i < m; i++)
        cin >> b[i];
    for (ll i = 0; i < m; i++)
    {
        auto it = a.upper_bound(b[i]);

        if (it != a.begin())
        {
            advance(it, -1);
            cout << *it << '\n';
            a.erase(it);
        }
        else
        {
            cout << "-1" << '\n';
        }
    }
    return 0;
}