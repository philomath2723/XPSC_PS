#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if (n < 10)
        cout << 0 << 0 << 0 << n << '\n';
    else if (n < 100)
        cout << 0 << 0 << n << '\n';
    else if (n < 1000)
        cout << 0 << n << '\n';
    else
        cout << n << '\n';
    return 0;
}