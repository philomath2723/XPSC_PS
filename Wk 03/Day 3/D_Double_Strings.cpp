#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int minLength = 8, maxLength = 0;
    string a[n];
    string res;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        res += '0';
        mp[a[i]] = 1;
        int currLength = a[i].size();
        minLength = min(minLength, currLength);
        maxLength = max(maxLength, currLength);
    }

    for (int i = 0; i < n; i++)
    {
        int currLength = a[i].size();
        if (currLength >= 2 * minLength)
        {
            for (int j = minLength; j <= currLength - minLength; j++)
            {
                string ck1 = a[i].substr(0, j);
                string ck2 = a[i].substr(j, currLength - j);
                if (mp[ck1] && mp[ck2])
                {
                    res[i] = '1';
                    break;
                }
            }
        }
    }
    cout << res << '\n';
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