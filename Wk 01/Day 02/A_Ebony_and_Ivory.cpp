#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    if (a % 2 == 0 && b % 2 == 0 && c % 2 == 1)
        cout << "No" << '\n';
    else
    {
        bool finder = false;

        for (int i = a; i <= max(c, a); i += a)
        {
            for (int j = b; j <= max(b, c); j += b)
            {
                if (i == c || j == c || i + j == c)
                {
                    finder = true;
                    break;
                }
            }
        }
        if (finder)
            cout << "Yes" << '\n';
        else
            cout << "No" << '\n';
    }
    return 0;
}