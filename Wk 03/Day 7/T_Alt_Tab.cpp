#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];

    map<string, int> mp;
    string res;
    for (int i = n - 1; i >= 0; i--)
    {
        mp[s[i]]++;
        if (mp[s[i]] == 1)
        {
            res += s[i].substr(s[i].size() - 2, 2);
        }
    }
    cout << res << '\n';
    return 0;
}