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
    {
        cin >> a[i];
    }

    ll ans = 0;
    for (ll i = 0; i < 3; i++)
    {
        map<pair<ll, ll>, ll> triplet;
        map<pair<pair<ll, ll>, ll>, ll> repeat;
        for (ll j = 0; j < n - 2; j++)
        {
            if (i == 0)
            {
                ans += triplet[{a[j + 1], a[j + 2]}];
                triplet[{a[j + 1], a[j + 2]}]++;
                ans -= repeat[{{a[j + 1], a[j + 2]}, a[j]}];
                repeat[{{a[j + 1], a[j + 2]}, a[j]}]++;
            }
            else if (i == 1)
            {
                ans += triplet[{a[j], a[j + 2]}];
                triplet[{a[j], a[j + 2]}]++;
                ans -= repeat[{{a[j], a[j + 2]}, a[j + 1]}];
                repeat[{{a[j], a[j + 2]}, a[j + 1]}]++;
            }
            else
            {
                ans += triplet[{a[j], a[j + 1]}];
                triplet[{a[j], a[j + 1]}]++;
                ans -= repeat[{{a[j], a[j + 1]}, a[j + 2]}];
                repeat[{{a[j], a[j + 1]}, a[j + 2]}]++;
            }
        }
    }
    cout << ans << '\n';
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