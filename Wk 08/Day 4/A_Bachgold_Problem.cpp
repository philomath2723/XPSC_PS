#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll ans = n / 2;
    cout << ans << '\n';
    if (n % 2 == 0)
    {
        for (ll i = 1; i <= ans; i++)
            cout << 2 << " ";
    }
    else
    {
        for (ll i = 1; i < ans; i++)
            cout << 2 << " ";
        cout << 3;
    }
    cout << '\n';
    return 0;
}