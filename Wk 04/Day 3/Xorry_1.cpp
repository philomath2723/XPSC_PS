#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll msb = -1, check = 1, f = 0, s = 0;
    while (check <= n)
    {
        check *= 2;
        msb++;
    }
    s = check / 2;
    f = (n ^ (1 << msb));
    cout << f << " " << s << '\n';
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