#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll a[n], score = INT_MAX;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < n; i++)
    {
        ll curr = 0;
        if (i == 0)
        {
            curr = abs(a[i] - a[i + 1]);
        }
        else if (i == n - 1)
        {
            curr = abs(a[i] - a[i - 1]);
        }
        else
        {
            curr = max(abs(a[i] - a[i + 1]), abs(a[i] - a[i - 1]));
        }
        score = min(score, curr);
    }
    cout << score << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}