#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    int n, k;
    cin >> n >> k;
    int ar[n];
    map<int, bool> mp;
    map<int, vector<int>> mv;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        mp[ar[i]] = true;
        mv[ar[i]].push_back(i);
    }

    while (k--)
    {
        int a, b;
        cin >> a >> b;

        if (!mp[a] || !mp[b])
            cout << "NO" << '\n';
        else
        {
            if (mv[a][0] < mv[b][mv[b].size() - 1])
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
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