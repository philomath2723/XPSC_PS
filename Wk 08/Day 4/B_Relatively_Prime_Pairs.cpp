#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll l, r;
    cin >> l >> r;
    cout << "Yes" << endl;
    for (ll i = l; i <= r; i += 2)
    {
        cout << i << " " << i + 1 << '\n';
    }
    return 0;
}