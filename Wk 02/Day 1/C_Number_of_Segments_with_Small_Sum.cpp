#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, s;
    cin >> n >> s;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll sum = 0, ans = 0, l = 0, r = 0;
    while (r < n)
    {
        sum += a[r];
        if (sum <= s)
        {
            ans += r - l + 1;
        }
        else
        {
            while (sum > s && l < r)
            {
                sum -= a[l];
                l++;
            }
            if (sum <= s)
            {
                ans += r - l + 1;
            }
        }
        r++;
    }
    cout << ans << '\n';
    return 0;
}