#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int mx = 0;
    int ans = 0;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        mp[x]++;
        mx = max(mx, mp[x]);
    }
    while (true)
    {
        if (mx == n)
        {
            break;
        }
        ans++;
        if (n - mx < mx)
        {
            ans += n - mx;
            break;
        }
        else
        {
            ans += mx;
            mx *= 2;
        }
    }
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