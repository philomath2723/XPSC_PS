#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll msn = 1, m = n - 1;
    while (m > 1)
    {
        m /= 2;
        msn *= 2;
    }
    ll small = 0, big = n - 1;
    for (ll i = 1; i <= n; i++)
    {
        if (big > msn)
        {
            cout << big << " ";
            big--;
        }
        else if (big == msn)
        {
            cout << big << " ";
            if (i < n)
                cout << small << " ";
            i++;
            small++;
            big--;
            msn /= 2;
        }
    }
    cout << '\n';
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