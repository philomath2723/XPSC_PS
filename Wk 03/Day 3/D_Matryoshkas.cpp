#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    sort(a, a + n);
    int p1 = -1, p2 = -1, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == p1)
        {
            if (a[i] == p2 + 1 && mp[p2] > 0)
                mp[p2]--;
            else
                ans++;
        }
        else if (a[i] == p1 + 1)
        {
            mp[p1]--;
            p2 = p1;
            p1 = a[i];
        }
        else
        {
            ans++;
            p2 = p1;
            p1 = a[i];
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