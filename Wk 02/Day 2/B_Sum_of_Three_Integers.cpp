#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, s;
    cin >> n >> s;
    ll ans = 0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            int k = s - (i + j);
            if (k >= 0 && k <= n)
                ans++;
        }
    }

    cout << ans << '\n';
    return 0;
}