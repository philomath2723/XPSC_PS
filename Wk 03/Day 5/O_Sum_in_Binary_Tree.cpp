#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;
        long long sum = 0;
        while (n > 0)
        {
            sum += n;
            n /= 2;
        }
        cout << sum << '\n';
    }

    return 0;
}