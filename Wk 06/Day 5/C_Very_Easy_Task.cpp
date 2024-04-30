#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    int x, y;
    cin >> n >> x >> y;

    ll l = min(x, y), r = n * min(x, y), mid, ans = 0;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        ll time = mid - min(x, y);
        ll total = 1;

        total += (time / x) + (time / y);
        // cout << "time-" << time << " mid-" << mid << " total-" << total << endl;
        if (total >= n)
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << '\n';
    return 0;
}