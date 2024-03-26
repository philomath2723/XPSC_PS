#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n <= 2)
    {
        cout << "YES" << '\n';
        return;
    }
    int l = 0, r = n - 1, del1, del2;
    bool f = true;
    while (l < r)
    {
        if (a[l] == a[r])
        {
            l++;
            r--;
        }
        else
        {
            del1 = a[l], del2 = a[r];
            f = false;
            break;
        }
    }
    if (f)
    {
        cout << "YES" << '\n';
        return;
    }

    vector<int> a1, a2;
    bool c1 = true, c2 = true;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != del1)
            a1.push_back(a[i]);
        if (a[i] != del2)
            a2.push_back(a[i]);
    }

    l = 0, r = a1.size() - 1;
    while (l < r)
    {
        if (a1[l] == a1[r])
        {
            l++;
            r--;
        }
        else
        {
            c1 = false;
            break;
        }
    }

    l = 0, r = a2.size() - 1;
    while (l < r)
    {
        if (a2[l] == a2[r])
        {
            l++;
            r--;
        }
        else
        {
            c2 = false;
            break;
        }
    }
    if (c1 || c2)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
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