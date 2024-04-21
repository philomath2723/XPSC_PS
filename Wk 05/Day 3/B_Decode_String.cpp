#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s, ans;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] > '2' || i > n - 3)
            ans.push_back('a' + s[i] - '0' - 1);
        else
        {
            if (s[i + 2] == '0')
            {
                if (i < n - 3 & s[i + 3] == '0')
                {
                    ans.push_back('a' + s[i] - '0' - 1);
                }
                else
                {
                    int letter = stoi(s.substr(i, 2));
                    // cout << letter << endl;
                    ans.push_back('a' + letter - 1);
                    i += 2;
                }
            }
            else
            {
                ans.push_back('a' + s[i] - '0' - 1);
            }
        }
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