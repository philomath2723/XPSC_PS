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
    if (n == 2 || n == 3)
        cout << "NO SOLUTION" << '\n';
    else
    {
        ll x = 2;
        for (ll i = 0; i < n / 2; i++)
        {
            cout << x << " ";
            x += 2;
        }
        x = 1;
        for (ll i = 0; i < n - n / 2; i++)
        {
            cout << x << " ";
            x += 2;
        }
    }
    return 0;
}