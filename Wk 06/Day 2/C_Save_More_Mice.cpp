#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll dis, n;
    cin >> dis >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    ll res = 0, cat = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (cat < a[i])
            res++;
        else
            break;
        cat += dis - a[i];
    }
    cout << res << "\n";
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