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
    cout << 3 << '\n';
    cout << "R " << n - 1 << '\n';
    cout << "L " << n << '\n';
    cout << "L 2\n";
    return 0;
}