#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n], minus = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] < 0)
            minus++;
    }

    ll distance = 0;
    sort(a, a + n);
    for (ll i = -1 + minus; i < n; i++)
    {
        if (i + k < n - 1)
        {
            distance += a[i + k] * 2;
            i += k - 1;
        }
        else
        {
            distance += a[n - 1];
            i = n - 1;
        }
    }
    cout << distance << endl;
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