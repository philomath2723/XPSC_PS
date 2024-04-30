#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n, k, b;
    cin >> n >> k;

    b = (k / (n - 1)) * n + (k % (n - 1));
    if (k % (n - 1) == 0)
        b--;

    cout << b << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}