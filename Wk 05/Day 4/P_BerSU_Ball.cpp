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
    ll b[n];
    for (ll i = 0; i < n; i++)
        cin >> b[i];
    ll m;
    cin >> m;
    ll g[m];
    for (ll i = 0; i < m; i++)
        cin >> g[i];
    sort(b, b + n);
    sort(g, g + m);
    ll ans = 0;
    ll i = 0, j = 0;
    while (i < n && j < m)
    {
        if (abs(b[i] - g[j]) <= 1)
        {
            ans++;
            i++;
            j++;
        }
        else
        {
            if (b[i] > g[j])
                j++;
            else
                i++;
        }
    }
    cout << ans << '\n';
    return 0;
}