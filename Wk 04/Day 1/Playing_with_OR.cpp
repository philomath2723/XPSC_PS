#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int l = 0, r = 0;
    int ans = 0;
    int res = 0;
    while (r < n)
    {
        ans = ans | a[r];
        if (r - l + 1 == k)
        {
            cout << (ans & 1) << endl;
            if ((ans & 1))
                res++;
            ans = ans & a[l];
            l++;
        }
        r++;
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