#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n][n - 1];
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - 1; j++)
            cin >> a[i][j];

    for (int i = 0; i < n - 1; i++)
        if (a[i][0] != a[i + 1][0])
        {
            if (i == 0)
            {
                if (a[i][0] != a[i + 2][0])
                {
                    cout << a[i + 1][0] << " ";
                    for (int j = 0; j < n - 1; j++)
                        cout << a[i][j] << " ";
                    cout << '\n';
                    return;
                }
            }
            cout << a[i][0] << " ";
            for (int j = 0; j < n - 1; j++)
                cout << a[i + 1][j] << " ";
            cout << '\n';
            return;
        }
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