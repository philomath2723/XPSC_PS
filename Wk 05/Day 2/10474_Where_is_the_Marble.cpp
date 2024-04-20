#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, j = 0;
    while (cin >> n)
    {
        int q;
        cin >> q;
        if (n == 0)
            return 0;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        cout << "CASE# " << ++j << ":" << '\n';
        while (q--)
        {
            int key;
            cin >> key;
            int l = 0, r = n - 1, ans = -1;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (key == a[mid])
                {
                    ans = mid + 1;
                    r = mid - 1;
                }
                else if (key > a[mid])
                {
                    l = mid + 1;
                }
                else
                {
                    r = mid - 1;
                }
            }
            if (ans != -1)
                cout << key << " found at " << ans << '\n';
            else
                cout << key << " not found" << '\n';
        }
    }
    return 0;
}