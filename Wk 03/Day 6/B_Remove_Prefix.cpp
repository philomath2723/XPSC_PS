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
        cin >> a[i];
    map<int, int> mp;
    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        mp[a[i]]++;
        if (mp[a[i]] > 1)
        {
            ans = i + 1;
            break;
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