#include <bits/stdc++.h>
#define ll long long
#define pii pair<ll, ll>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll cnt = 0, ans = 0, l = 0, r = 0;
    map<ll, ll> mp;
    while (r < n)
    {
        mp[a[r]]++;
        if (mp[a[r]] == 1)
        {
            cnt++;
        }
        if (cnt <= k)
        {
            ans += r - l + 1;
        }
        else
        {
            while (cnt > k && l < r)
            {
                mp[a[l]]--;
                if (mp[a[l]] == 0)
                {
                    cnt--;
                }
                l++;
            }
            if (cnt <= k)
            {
                ans += r - l + 1;
            }
        }
        r++;
    }
    cout << ans << '\n';
    return 0;
}