#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n, q;
    cin >> n >> q;
    ll stairs[n], legs[q], legs1[q];
    for (ll i = 0; i < n; i++)
        cin >> stairs[i];
    for (ll i = 0; i < q; i++)
    {
        cin >> legs[i];
        legs1[i] = legs[i];
    }

    sort(legs1, legs1 + q);
    map<ll, ll> mp;
    ll j = 0, ans = 0;
    for (ll i = 0; i < q; i++)
    {
        while (j < n)
        {
            if (stairs[j] <= legs1[i])
                ans += stairs[j];
            else
                break;
            j++;
        }
        mp[legs1[i]] = ans;
    }
    for (ll i = 0; i < q; i++)
    {
        cout << mp[legs[i]] << " ";
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