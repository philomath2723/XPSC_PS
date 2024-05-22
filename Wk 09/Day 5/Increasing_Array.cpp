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
    ll a[n], ans = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i > 0)
        {
            if (a[i] < a[i - 1])
            {
                ans += a[i - 1] - a[i];
                a[i] = a[i - 1];
            }
        }
    }
    cout << ans << '\n';
    return 0;
}