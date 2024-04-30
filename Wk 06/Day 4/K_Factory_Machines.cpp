#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, p;
    cin >> n >> p;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    ll l = 1, r = p * a[0], ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2, made = 0;

        for (ll i = 0; i < n; i++)
        {
            made += mid / a[i];
        }
        if (made >= p)
        {
            r = mid - 1;
            ans = mid;
        }
        else
            l = mid + 1;
    }

    cout << ans << '\n';

    return 0;
}