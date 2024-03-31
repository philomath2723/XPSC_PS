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
        cin >> a[i];
    priority_queue<int> pq;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            if (!pq.empty())
            {
                ans += pq.top();
                pq.pop();
            }
            else
                continue;
        }
        else
            pq.push(a[i]);
    }
    cout << ans << '\n';
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