#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (ll i = 0; i < n - 1; i++)
    {
        if (abs(a[i] - a[i + 1]) >= 2)
        {
            cout << "YES\n"
                 << i + 1 << " " << i + 2 << '\n';
            return;
        }
    }
    cout << "NO\n";
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