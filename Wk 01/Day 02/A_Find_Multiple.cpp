#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    for (int i = a / c; i <= b / c + 1; i++)
    {
        if (i * c >= a && i * c <= b)
        {
            cout << i * c << '\n';
            break;
        }
        if (i * c > b)
        {
            cout << "-1" << '\n';
            break;
        }
    }
    return 0;
}