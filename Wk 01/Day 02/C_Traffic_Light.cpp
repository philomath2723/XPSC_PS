#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    char c;
    cin >> c;
    string s;
    cin >> s;
    vector<int> curr;
    vector<int> gr;
    if (c == 'g')
        cout << 0 << '\n';
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == c)
                curr.push_back(i);
            if (s[i] == 'g')
                gr.push_back(i);
        }
        int j = 0, ans = INT_MIN;
        for (int i = 0; i < curr.size(); i++)
        {
            if (j < gr.size() && curr[i] < gr[j])
            {
                ans = max(ans, gr[j] - curr[i]);
            }
            else
            {
                while (j < gr.size() && curr[i] > gr[j])
                {
                    j++;
                }
                if (j < gr.size())
                {
                    ans = max(ans, gr[j] - curr[i]);
                }
                else
                {
                    ans = max(ans, (n - curr[i]) + gr[0]);
                }
            }
        }
        cout << ans << '\n';
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