#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    while (k--)
    {
        int key;
        cin >> key;
        int l = 0, r = n - 1;
        bool find = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (key == a[mid])
            {
                find = true;
                break;
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
        if (find)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}