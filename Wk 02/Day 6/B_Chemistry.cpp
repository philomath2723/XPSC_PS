#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int removes = 0;
    int a[26] = {0};
    for (int i = 0; i < n; i++)
        a[s[i] - 'a']++;
    for (int i = 0; i < 26; i++)
    {
        removes += a[i] % 2;
    }
    // cout << removes << " " << k << endl;
    for (int i = removes; i <= n; i += 2)
    {
        if (k == i || k == i - 1 || k == i + 1)
        {
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" << '\n';
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