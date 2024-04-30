#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, a, b;
    cin >> n >> a >> b;

    ll l = 1, r = min(a, b), ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;

        ll pos_dist = a / mid + b / mid;

        if (pos_dist >= n)
        {
            l = mid + 1;
            ans = mid;
        }
        else
            r = mid - 1;
    }

    cout << ans << '\n';

    return 0;
}