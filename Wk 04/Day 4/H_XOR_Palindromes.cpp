#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int l = 0, r = n - 1, count = 0;
    while (l < r)
    {
        if (s[l] != s[r])
            count++;
        l++;
        r--;
    }

    if ((n & 1))
    {
        for (int i = 0; i <= n; i++)
        {
            if (i < count || i > n - count)
                cout << "0";
            else
                cout << "1";
        }
    }
    else
    {
        for (int i = 0; i <= n; i++)
        {
            if (i >= count && i <= n - count && !((i - count) & 1))
                cout << "1";
            else
                cout << "0";
        }
    }
    cout << '\n';
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