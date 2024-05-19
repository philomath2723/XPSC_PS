#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, x;
    cin >> n >> x;
    vector<pair<ll, ll>> a;
    for (ll i = 0; i < n; i++)
    {
        ll b;
        cin >> b;
        a.push_back({b, i + 1});
    }
    sort(a.begin(), a.end());
    for (ll i = 0; i < n - 2; i++)
    {
        if (a[i].first < x - 1)
        {
            ll l = i + 1, r = n - 1, sum = x - a[i].first;
            while (l < r)
            {
                if (a[l].first + a[r].first == sum)
                {
                    cout << a[i].second << " " << a[l].second << " " << a[r].second << '\n';
                    return 0;
                }
                else if (a[l].first + a[r].first > sum)
                    r--;
                else
                    l++;
            }
        }
    }
    cout << "IMPOSSIBLE" << '\n';
    return 0;
}