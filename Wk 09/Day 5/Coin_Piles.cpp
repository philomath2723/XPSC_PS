#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll a, b;
    cin >> a >> b;

    ll x = (2 * a - b) / 3, y = (2 * b - a) / 3;
    if (x < 0 || y < 0)
        cout << "NO" << '\n';
    else if (2 * x + y == a && x + 2 * y == b)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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