#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n + 1] = {0};
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
        {
            cout << i << '\n';
            break;
        }
    }
    return 0;
}