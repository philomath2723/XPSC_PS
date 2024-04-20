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
    sort(a, a + n);
    int q;
    cin >> q;
    while (q--)
    {
        int key;
        cin >> key;
        auto it = upper_bound(a, a + n, key);
        cout << it - a << '\n';
        // int l = 0, r = n - 1, ans = 0;
        // while (l <= r)
        // {
        //     int mid = (l + r) / 2;
        //     if (key >= a[mid])
        //     {
        //         ans = mid + 1;
        //         l = mid + 1;
        //     }
        //     else
        //     {
        //         r = mid - 1;
        //     }
        // }
        // cout << ans << '\n';
    }
    return 0;
}