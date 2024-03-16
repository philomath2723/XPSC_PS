#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    if (abs(a - b) < 2)
        cout << a + b << '\n';
    else
    {
        if (a > b)
            cout << 2 * a - 1 << '\n';
        else
            cout << 2 * b - 1 << '\n';
    }
    return 0;
}