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
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll l = 0, r = 0, ans = 0;
    map<ll, pair<ll, ll>> mp;
    while (r < n)
    {
        mp[a[r]].second++;
        if (mp[a[r]].second == 1)
        {
            ans = max(ans, r - l + 1);
            mp[a[r]].first = r;
        }
        else
        {
            while (l <= mp[a[r]].first)
            {
                mp[a[l]].first = 0;
                mp[a[l]].second = 0;
                l++;
            }
            ans = max(ans, r - l + 1);
            mp[a[r]].second = 1;
            mp[a[r]].first = r;
        }
        r++;
    }
    cout << ans << '\n';
    return 0;
}