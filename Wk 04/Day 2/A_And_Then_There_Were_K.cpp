#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin >> n;

    ll a = 1;
    while (a <= n)
    {
        a *= 2;
    }
    cout << (a / 2) - 1 << endl;
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