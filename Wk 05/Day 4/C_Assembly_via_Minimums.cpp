#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll m = (n * (n - 1)) / 2;
    ll b[m];
    for (ll i = 0; i < m; i++)
        cin >> b[i];

    sort(b, b + m);
    for (ll i = 0; i < m; i += n)
    {
        cout << b[i] << " ";
        n--;
    }
    cout << b[m - 1] << '\n';
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