#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int a[26] = {0};
    for (int i = 0; i < s.size(); i++)
        a[s[i] - 'a']++;
    bool ck = true;
    for (int i = 0; i < 26; i++)
    {
        if (a[i] == 0)
        {
            cout << char(i + 'a') << '\n';
            ck = false;
            break;
        }
    }
    if (ck)
        cout << "None" << '\n';
    return 0;
}