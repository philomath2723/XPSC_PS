#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll x, y;
    cin >> x >> y;
    ll same_x_y_num = max(x, y) * (max(x, y) - 1) + 1;
    if (x == y)
        cout << same_x_y_num << '\n';
    else if (x > y)
    {
        if (x % 2 == 0)
            cout << same_x_y_num + x - y << '\n';
        else
            cout << same_x_y_num - x + y << '\n';
    }
    else
    {
        if (y % 2 == 0)
            cout << same_x_y_num + x - y << '\n';
        else
            cout << same_x_y_num - x + y << '\n';
    }
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