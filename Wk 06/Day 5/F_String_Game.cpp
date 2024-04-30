#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s, t;
    cin >> s >> t; // input taken.

    ll n = s.size();        // string size.
    ll char_remove_step[n]; // to store char remove step.
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x; // input, which char will remove with i-th step.
        char_remove_step[x - 1] = i;
        /*input given as a sequence that for 1st step, which
        i-th char will remove, then 2nd step and so on.
        Given sequence :
        char position   :   5   3   4   1   7   6   2
        removing step   :   1st 2nd 3rd 4th 5th 6th 7th
        ## If we think alternatively,
        as such, for 1st & 2nd step:
        pos-5 char will remove with 1st step.
        pos-3 char will remove with 2nd step.
        so,
        char_remove_step[pos-5 char] = 1
        char_remove_step[pos-3 char] = 2 */
    }

    ll l = 0, r = n, ans = 0; // to find highest step with BST.
    while (l <= r)
    {
        ll step = (l + r) / 2, ok = 0;
        for (ll i = 0, j = 0; i < n; i++)
        {
            if (s[i] == t[j] && char_remove_step[i] >= step)
                j++; /* if (char_remove_step[i] >= step), that
                        means, this char not removed yet. because
                        if we wanna remove this char, we have do
                        the operations > char_remove_step[i]*/
            if (j == t.size())
            {
                ok = 1; // it means present string has (t) subsequence.
                break;
            }
        }
        if (ok)
        {
            ans = step;
            l = step + 1; // we have to check, is more step possible or not.
        }
        else
            r = step - 1; // we have to reduce step.
    }
    cout << ans << '\n';

    return 0;
}