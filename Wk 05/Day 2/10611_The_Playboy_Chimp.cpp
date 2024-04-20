#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int q;
    cin >> q;
    while (q--)
    {
        int s = 0, b = 0, luchu;
        cin >> luchu;
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (luchu > a[mid])
            {
                s = a[mid];
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (luchu < a[mid])
            {
                b = a[mid];
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        if (s == 0)
            cout << "X ";
        else
            cout << s << " ";
        if (b == 0)
            cout << "X" << '\n';
        else
            cout << b << '\n';
    }
    return 0;
}