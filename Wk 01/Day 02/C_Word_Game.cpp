#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<string> first, second, third;
    map<string, int> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
        first.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
        second.push_back(s);
    }
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        mp[s]++;
        third.push_back(s);
    }
    int ft = 0, sd = 0, td = 0;
    for (int i = 0; i < n; i++)
    {
        if (mp[first[i]] == 1)
            ft += 3;
        else if (mp[first[i]] == 2)
            ft += 1;

        if (mp[second[i]] == 1)
            sd += 3;
        else if (mp[second[i]] == 2)
            sd += 1;

        if (mp[third[i]] == 1)
            td += 3;
        else if (mp[third[i]] == 2)
            td += 1;
    }
    cout << ft << " " << sd << " " << td << '\n';
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