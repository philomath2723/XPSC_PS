#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    ll odds = 0, minOdd = INT_MAX, sum = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        sum += x;
        if (x % 2 == 1)
        {
            minOdd = min(minOdd, x);
            odds++;
        }
    }
    if (odds % 2 == 1)
        cout << sum - minOdd << '\n';
    else
        cout << sum << '\n';
    return 0;
}