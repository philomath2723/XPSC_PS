#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    int n, m;
    cin >> n;
    int a[10005] = {0};
    int checker = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
        if (a[x] > 1)
            checker++;
    }
    if (checker % 2 == 1)
        checker++;
    cout << n - checker << '\n';
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