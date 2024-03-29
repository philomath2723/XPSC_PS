#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
ll n, m;
bool valid(ll i, ll j)
{
    if (i < 0 || i == n || j < 0 || j == m)
        return false;
    return true;
}
void solve()
{
    cin >> n >> m;
    ll a[n][m];
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    ll ans = INT_MIN;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            ll sum = 0;
            ll l = i, k = j;
            while (true)
            {
                if (valid(l, k))
                {
                    sum += a[l][k];
                    l++;
                    k++;
                }
                else
                    break;
            }
            l = i - 1, k = j - 1;
            while (true)
            {
                if (valid(l, k))
                {
                    sum += a[l][k];
                    l--;
                    k--;
                }
                else
                    break;
            }
            l = i + 1, k = j - 1;
            while (true)
            {
                if (valid(l, k))
                {
                    sum += a[l][k];
                    l++;
                    k--;
                }
                else
                    break;
            }
            l = i - 1, k = j + 1;
            while (true)
            {
                if (valid(l, k))
                {
                    sum += a[l][k];
                    l--;
                    k++;
                }
                else
                    break;
            }
            ans = max(sum, ans);
        }
    }
    cout << ans << '\n';
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