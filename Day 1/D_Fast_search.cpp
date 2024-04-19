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
    int k;
    cin >> k;
    while (k--)
    {
        int key, key2;
        cin >> key >> key2;

        int l = 0, r = n - 1, ans1 = n;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (key <= a[mid])
            {
                ans1 = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        l = 0, r = n - 1;
        int ans2 = -1;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (key2 >= a[mid])
            {
                ans2 = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << ans2 - ans1 + 1 << " ";
        // auto it1 = lower_bound(a, a + n, l);
        // auto it2 = upper_bound(a, a + n, r);
        // cout << it2 - it1 << " ";
    }
    return 0;
}