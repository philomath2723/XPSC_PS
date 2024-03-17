#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];
    int l = 0, r = 0;
    long long ans = 0;
    while (l < n && r < m)
    {
        int cntA = 0, cntB = 0, curr = a[l];
        while (l < n && curr == a[l])
        {
            cntA++;
            l++;
        }
        while (r < m && b[r] < curr)
        {
            r++;
        }
        while (r < m && curr == b[r])
        {
            cntB++;
            r++;
        }
        ans += (1ll * cntA * cntB);
    }
    cout << ans << '\n';

    return 0;
}