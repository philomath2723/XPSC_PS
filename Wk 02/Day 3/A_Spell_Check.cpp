#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    map<char, int> mp1;
    string T = "Timur";
    for (char c : T)
        mp1[c]++;
    int n;
    string s;
    cin >> n >> s;
    if (n > 5)
    {
        cout << "NO" << '\n';
        return;
    }
    map<char, int> mp2;
    for (int i = 0; i < n; i++)
    {
        mp2[s[i]]++;
    }
    for (char c : T)
    {
        if (mp1[c] != mp2[c])
        {
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';
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