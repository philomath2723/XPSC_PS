#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string t = s;
    reverse(t.begin(), t.end());
    if (s == t)
    {
        cout << 0 << '\n';
        return;
    }
    sort(t.begin(), t.end());
    string res;
    res += t[0];
    char last = t[0];
    for (ll i = 1; i < n; i++)
    {
        if (t[i] != last)
        {
            res += t[i];
            last = t[i];
        }
    }
    ll ans = 1e18;
    for (ll i = 0; i < res.size(); i++)
    {
        char c = res[i];
        ll l = 0, r = n - 1, score = 0;
        while (l <= r)
        {
            if (s[l] == s[r])
            {
                l++;
                r--;
            }
            else
            {
                if (s[l] == c)
                {
                    l++;
                    score++;
                }
                else if (s[r] == c)
                {
                    r--;
                    score++;
                }
                else
                {
                    score = n;
                    break;
                }
            }
        }
        if (score < n)
        {
            ans = min(score, ans);
        }
    }
    if (ans != 1e18)
        cout << ans << '\n';
    else
        cout << "-1" << '\n';
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