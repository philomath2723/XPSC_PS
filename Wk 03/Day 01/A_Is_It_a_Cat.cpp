#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    bool e = false, o = false, w = false;
    if (s[0] == 'm' || s[0] == 'M')
    {
        for (int i = 1; i < n; i++)
        {

            if (s[i] == 'm' || s[i] == 'M')
            {
                if (s[i - 1] == 'm' || s[i - 1] == 'M')
                {
                    continue;
                }
                else
                {
                    cout << "NO" << '\n';
                    return;
                }
            }
            else if (s[i] == 'e' || s[i] == 'E')
            {
                e = true;
                if (s[i - 1] == 'm' || s[i - 1] == 'M' || s[i - 1] == 'e' || s[i - 1] == 'E')
                {
                    continue;
                }
                else
                {
                    cout << "NO" << '\n';
                    return;
                }
            }
            else if (s[i] == 'o' || s[i] == 'O')
            {
                o = true;
                if (s[i - 1] == 'o' || s[i - 1] == 'O' || s[i - 1] == 'e' || s[i - 1] == 'E')
                {
                    continue;
                }
                else
                {
                    cout << "NO" << '\n';
                    return;
                }
            }
            else if (s[i] == 'w' || s[i] == 'W')
            {
                w = true;
                if (s[i - 1] == 'o' || s[i - 1] == 'O' || s[i - 1] == 'w' || s[i - 1] == 'W')
                {
                    continue;
                }
                else
                {
                    cout << "NO" << '\n';
                    return;
                }
            }
            else
            {
                cout << "NO" << '\n';
                return;
            }
        }
    }
    else
    {
        cout << "NO" << '\n';
        return;
    }
    if (e && o && w)
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