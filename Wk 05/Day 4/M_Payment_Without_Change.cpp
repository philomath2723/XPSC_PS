#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll a, b, n, s;
    cin >> a >> b >> n >> s;

    ll ck = min(a, s / n);
    if (s - (ck * n) > b)
        cout << "NO" << '\n';
    else
        cout << "YES" << '\n';
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