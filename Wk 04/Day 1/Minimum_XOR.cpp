#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    int total_Xor = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        total_Xor = total_Xor ^ a[i];
    }

    int ans = total_Xor;
    for (int i = 0; i < n; i++)
    {
        ans = min(ans, total_Xor ^ a[i]);
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