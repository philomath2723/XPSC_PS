#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = 0;
    if ((n & 1) == 0)
    {
        for (int i = 0; i < n; i++)
            ans ^= a[i];
        if (ans == 0)
            cout << 0 << '\n';
        else
            cout << "-1" << '\n';
        return;
    }
    for (int i = 0; i < n; i++)
        ans ^= a[i];
    cout << ans << '\n';
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