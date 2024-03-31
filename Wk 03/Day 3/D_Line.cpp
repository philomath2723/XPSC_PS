#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'L')
            sum += i;
        else
            sum += n - i - 1;
    }
    vector<ll> a;
    ll l = 0, r = n - 1, changeSum = 0;
    while (l <= r)
    {
        if (l + 1 == n - r)
        {
            if (s[l] == 'L')
            {
                changeSum += (n - 1 - l) - l;
                a.push_back(changeSum);
            }
            l++;
        }
        else if (n - r == l)
        {
            if (s[r] == 'R')
            {
                changeSum += r - (n - 1 - r);
                a.push_back(changeSum);
            }
            r--;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (i < a.size() && a.size() > 0)
            cout << sum + a[i] << " ";
        else if (i >= a.size() && a.size() > 0)
            cout << sum + a[a.size() - 1] << " ";
        else
            cout << sum << " ";
    }
    cout << endl;
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