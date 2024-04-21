#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<vector<int>> path(26);
    for (int i = 0; i < n; i++)
    {
        path[s[i] - 'a'].push_back(i);
    }
    int a = s[0] - 'a', b = s[n - 1] - 'a';
    if (a >= b)
    {
        int cost = 0, tiles = 0, last = a;
        for (int i = a; i >= b; i--)
        {
            tiles += path[i].size();
            if (path[i].size() != 0)
            {
                cost += last - i;
                last = i;
            }
        }
        cout << cost << " " << tiles << '\n';
        for (int i = a; i >= b; i--)
        {
            if (path[i].size() != 0)
            {
                for (int j = 0; j < path[i].size(); j++)
                    cout << path[i][j] + 1 << " ";
            }
        }
        cout << '\n';
    }
    else
    {
        int cost = 0, tiles = 0, last = a;
        for (int i = a; i <= b; i++)
        {
            tiles += path[i].size();
            if (path[i].size() != 0)
            {
                cost += i - last;
                last = i;
            }
        }
        cout << cost << " " << tiles << '\n';
        for (int i = a; i <= b; i++)
        {
            if (path[i].size() != 0)
            {
                for (int j = 0; j < path[i].size(); j++)
                    cout << path[i][j] + 1 << " ";
            }
        }
        cout << '\n';
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