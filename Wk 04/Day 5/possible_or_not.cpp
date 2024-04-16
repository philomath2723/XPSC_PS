#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    int n, b;
    cin >> n >> b;
    int a[n];
    int curr = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if ((a[i] & b) == b)
        {
            curr &= a[i];
        }
        cout << curr << endl;
    }
    if (curr == b)
        cout << "YES" << '\n';
    else
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