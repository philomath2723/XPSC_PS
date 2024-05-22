#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    ll n = s.size();
    ll a[26] = {0};
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - 'A']++;
    }
    bool ok = false;
    for (ll i = 0; i < 26; i++)
    {
        if (n % 2 == 0 && a[i] % 2 != 0)
        {
            cout << "NO SOLUTION" << '\n';
            return 0;
        }
        if (n % 2 != 0 && ok && a[i] % 2 != 0)
        {
            cout << "NO SOLUTION" << '\n';
            return 0;
        }
        if (a[i] % 2 != 0)
            ok = true;
    }
    ll j = 0;
    for (ll i = 0; i < 26; i++)
    {
        if (a[i] != 0 && a[i] % 2 == 0)
        {
            ll m = a[i] / 2;
            for (ll k = 0; k < m; k++)
            {
                s[j] = 'A' + i;
                s[n - j - 1] = 'A' + i;
                j++;
            }
        }
        if (a[i] != 0 && a[i] % 2 == 1)
        {
            s[n / 2] = 'A' + i;
            ll m = a[i] / 2;
            ll b = n / 2 - 1;
            for (ll k = 0; k < m; k++)
            {
                s[b] = 'A' + i;
                s[n - b - 1] = 'A' + i;
                b--;
            }
        }
    }
    cout << s << endl;
    return 0;
}