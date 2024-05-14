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
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < n; i++)
    {
        if (sqrt(a[i]) * sqrt(a[i]) != a[i])
            cout << "NO" << '\n';
        else
        {
            bool ok = false;
            for (ll j = 2; j * j <= a[i]; j++)
            {
                if (a[i] % j == 0 && a[i] / j == j)
                {
                    cout << "YES" << '\n';
                    ok = true;
                    break;
                }
                else if (a[i] % j == 0 && a[i] / j != j)
                {
                    cout << "NO" << '\n';
                    ok = true;
                    break;
                }
            }
            if (!ok)
                cout << "NO" << '\n';
        }
    }
    return 0;
}