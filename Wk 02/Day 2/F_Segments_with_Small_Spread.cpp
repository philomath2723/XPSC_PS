#include <bits/stdc++.h>
#define ll long long
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

    ll l = 0, r = 0, ans = 0;
    multiset<ll> ms;
    while (r < n)
    {
        ms.insert(a[r]);
        ll mx = *ms.rbegin();
        ll mn = *ms.begin();
        if (mx - mn <= k)
        {
            ans += r - l + 1;
        }
        else
        {
            while (mx - mn > k)
            {
                auto it = ms.find(a[l]);
                ms.erase(it);
                mx = *ms.rbegin();
                mn = *ms.begin();
                l++;
            }
            if (mx - mn <= k)
                ans += r - l + 1;
        }
        r++;
    }
    cout << ans << endl;
    return 0;
}
