#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (abs(a - 1) < abs(b - c) + abs(c - 1))
        cout << 1 << '\n';
    else if (abs(a - 1) > abs(b - c) + abs(c - 1))
        cout << 2 << '\n';
    else
        cout << 3 << '\n';
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