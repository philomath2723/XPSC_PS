#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
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
    sort(a, a + n);
    ll l = a[n / 2], r = a[n / 2] + k, ans = a[n / 2];
    while (l <= r)
    {
        ll mid = (l + r) / 2, ck = 0;
        for (ll i = n / 2; i < n; i++)
        {
            if (a[i] < mid)
                ck += mid - a[i];
            else
                break;
        }

        if (ck <= k)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    cout << ans << '\n';
    return 0;
}