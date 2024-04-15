#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll s = 1;
    while (s <= n)
        s *= 2;
    bool ok = false;
    ll zeros = 0;
    s = (s >> 2);
    while (s > 0)
    {
        if ((n & s) == s && !ok)
            ok = true;
        if ((n & s) == 0 && ok)
            zeros++;
        s = (s >> 1);
    }
    cout << (1 << zeros) << '\n';
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