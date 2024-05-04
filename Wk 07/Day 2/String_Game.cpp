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
    ll ones = 0, zeros = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
            ones++;
        else
            zeros++;
    }
    ll pairs = min(ones, zeros);
    if (pairs & 1)
        cout << "Zlatan" << '\n';
    else
        cout << "Ramos" << '\n';
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