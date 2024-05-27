#include <bits/stdc++.h>
#define ll long long
using namespace std;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll odd = (n + 1) / 2;
    ll even4 = odd + (n - 2) / 4 + 1;
    ll even8 = even4 + (n - 4) / 8 + 1;
    if (k <= odd)
        cout << ((k * 2) - 1) << endl;
    else if (k > odd && k <= even4)
    {
        ll a = k - odd - 1;
        cout << ((a * 4) + 2) << endl;
    }
    else if (k > even4 && k <= even8)
    {
        ll a = k - even4 - 1;
        cout << ((a * 8) + 4) << endl;
    }
    else
    {
        ll a = n - even8;
        k = k - even8;
        ll lOdd = (a + 1) / 2;
        int c = 16, d = 8;
        while (true)
        {
            if (k <= lOdd)
            {
                int b = k - 1;
                cout << ((b * c) + d) << endl;
                break;
            }
            else
            {
                k = k - lOdd;
                a = a - lOdd;
                lOdd = (a + 1) / 2;
                c *= 2;
                d *= 2;
            }
        }
    }
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}