#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool first_pos = true, first_neg = true;
    ll sum = a[0], last = a[0];
    if (a[0] > 0)
        first_pos = false;
    else
        first_neg = false;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] > 0)
        {
            if (first_pos)
            {
                sum += a[i];
                last = a[i];
                first_pos = false;
                first_neg = true;
            }
            else if (a[i] > last)
            {
                sum -= last;
                last = a[i];
                sum += last;
            }
        }
        else
        {
            if (first_neg)
            {
                sum += a[i];
                last = a[i];
                first_neg = false;
                first_pos = true;
            }
            else if (a[i] > last)
            {
                sum -= last;
                last = a[i];
                sum += last;
            }
        }
    }
    cout << sum << '\n';
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