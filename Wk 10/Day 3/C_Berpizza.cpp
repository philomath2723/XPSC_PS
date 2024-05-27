#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>

using namespace std;
int i = 1;
multiset<pair<int, int>> poly;
multiset<pair<int, int>> mono;
void solve()
{
    int way;
    cin >> way;
    if (way == 1)
    {
        int cost;
        cin >> cost;
        poly.insert({cost, i});
        mono.insert({i, cost});
        i++;
    }
    else if (way == 2)
    {
        // auto it = mono.begin();
        // cout <<  << '\n';
        poly.erase(mono.begin());
        mono.erase(mono.begin());
    }
    else
    {
        // cout << poly.end()<< '\n';
        mono.erase(poly.end());
        poly.erase(poly.end());
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