#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string pat, txt;
    cin >> pat >> txt;
    int k = pat.size();
    int n = txt.size();
    vector<int> a(26, 0);
    for (int i = 0; i < k; i++)
        a[pat[i] - 'a']++;
    vector<int> b(26, 0);
    int ans = 0;
    int l = 0, r = 0;
    while (r < n)
    {
        b[txt[r] - 'a']++;
        if (r - l + 1 == k)
        {
            if (a == b)
                ans++;
            b[txt[l] - 'a']--;
            l++;
            r++;
        }
        else
            r++;
    }
    cout << ans;
    return 0;
}