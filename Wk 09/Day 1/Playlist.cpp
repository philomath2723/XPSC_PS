#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll a[n];
    unordered_map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    ll length = 0, ans = 0;
    for (ll i = 0; i < n; i++)
    {
        mp[a[i]]++;
        if (mp[a[i]] == 1)
        {
            length++;
            ans = max(length, ans);
        }
        else
        {
            mp.clear();
            length = 1;
            mp[a[i]]++;
        }
    }
    cout << ans << '\n';

    return 0;
}