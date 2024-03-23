#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s, t;
    cin >> s >> t;
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
            ans++;
    }

    cout << ans << '\n';
    return 0;
}