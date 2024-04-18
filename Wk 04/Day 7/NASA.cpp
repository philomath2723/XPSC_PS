#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
vector<ll> pali;
void palindrome()
{
    for (ll i = 0; i < (1 << 15); i++)
    {
        string s = to_string(i);
        string t = s;
        reverse(t.begin(), t.end());
        if (s == t)
            pali.push_back(i);
    }
}

void solve()
{
    // cout << pali.size() << " ";
    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    ll ans = 0;
    unordered_map<ll, ll> mp;
    for (ll i = 0; i < n; i++)
    {
        mp[a[i]]++;
        for (ll pali_num : pali)
        {
            ans += mp[(a[i] ^ pali_num)];
        }
    }
    cout << ans << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    palindrome();
    while (t--)
        solve();
    return 0;
}