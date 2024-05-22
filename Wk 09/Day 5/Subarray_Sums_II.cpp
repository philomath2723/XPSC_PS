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
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll r = i, sum = 0;
        while (r < n)
        {
            sum += a[r];
            if (sum == s)
            {
                ans++;
            }
            r++;
        }
    }

    cout << ans << '\n';
    return 0;
}