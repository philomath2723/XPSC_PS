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

    for (int i = 0; i < n; i++)
    {
        int x;
        string s;
        cin >> x >> s;
        for (int j = 0; j < x; j++)
        {
            if (s[j] == 'D')
                a[i]++;
            else
                a[i]--;
        }
        cout << (a[i] + 10) % 10 << " ";
    }
    cout << '\n';
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