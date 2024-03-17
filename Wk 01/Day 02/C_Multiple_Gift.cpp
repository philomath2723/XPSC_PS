#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long x, y;
    cin >> x >> y;
    long long ans = 0, sum = x;
    while (sum <= y)
    {
        ans++;
        sum *= 2;
    }
    cout << ans << '\n';
    return 0;
}