#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    string a, b;
    cin >> a >> b;
    char a1 = a[a.size() - 1], b1 = b[b.size() - 1];
    if (a1 != b1)
    {
        if (a1 < b1)
            cout << ">" << '\n';
        else
            cout << "<" << '\n';
    }
    else
    {
        if (a1 == 'S')
        {
            if (a.size() > b.size())
                cout << "<" << '\n';
            else if (a.size() < b.size())
                cout << ">" << '\n';
            else
                cout << "=" << '\n';
        }
        else if (a1 == 'L')
        {
            if (a.size() > b.size())
                cout << ">" << '\n';
            else if (a.size() < b.size())
                cout << "<" << '\n';
            else
                cout << "=" << '\n';
        }
        else
            cout << "=" << '\n';
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