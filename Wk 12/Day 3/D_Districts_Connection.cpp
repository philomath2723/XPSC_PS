#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll a[n], b[n];
    map<ll, set<ll>> mp;
    set<ll> st;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        st.insert(a[i]);
        mp[a[i]].insert(i + 1);
        b[i] = a[i];
    }
    sort(b, b + n);
    if (b[0] == b[n - 1])
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";

    set<ll> v = mp[*(st.begin())];
    st.erase(st.begin());
    ll next = 0;
    for (auto it : st)
    {
        for (auto it1 = mp[it].begin(); it1 != mp[it].end(); it1++)
        {
            cout << *(v.begin()) << " " << *it1 << '\n';
            next = *it1;
        }
    }

    for (auto it1 = ++v.begin(); it1 != v.end(); it1++)
    {
        cout << next << " " << *it1 << '\n';
    }
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