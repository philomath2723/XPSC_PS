#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t;
    ll a[s.size()];

    for (ll i = 0; i < s.size(); i++)
        cin >> a[i];

    ll ans = 0;
    ll l = 0, r = s.size();
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        // cout << mid << endl;
        string s1 = s;
        vector<ll> v;
        for (ll i = 0; i < mid; i++)
        {
            v.push_back(a[i] - 1);
        }
        sort(v.begin(), v.end());
        ll ok = 0;
        for (ll i = 0, j = 0; i < s1.size(); i++)
        {
            auto it = lower_bound(v.begin(), v.end(), i);
            if (s1[i] == t[j] && (it == v.end() || *it != i))
                j++;
            if (j == t.size())
            {
                ok = 1;
                break;
            }
        }
        if (ok)
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid - 1;
    }

    cout << ans << endl;
    return 0;
}