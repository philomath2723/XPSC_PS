#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
int n;
bool valid(int i, int j)
{
    if (i < 1 || i > n || j < 1 || j > n)
        return false;
    return true;
}
void queen(vector<vector<string>> &v, vector<string> &s, vector<vector<int>> &a, int idx1, int idx2, int n)
{
    if (s.size() == n)
    {
        v.push_back(s);
        return;
    }

    for (int i = idx1; i <= n; i++)
    {
        int j;
        if (i == idx1)
            j = idx2;
        else
            j = 1;
        for (; j <= n; j++)
        {
            if (a[i][j] == 0)
            {
                a[i][j]++;
                string b;
                for (int k = 0; k < n; k++)
                {
                    if (k == j - 1)
                        b += 'Q';
                    else
                        b += '.';
                }
                s.push_back(b);
                int x = i, y = j;
                for (int k = 1; k <= n; k++)
                {
                    if (k != j)
                        a[i][k]++;
                    if (k != i)
                        a[k][j]++;
                }
                while (true)
                {
                    if (valid(++x, ++y))
                    {
                        a[x][y]++;
                    }
                    else
                        break;
                }

                x = i, y = j;
                while (true)
                {
                    if (valid(++x, --y))
                    {
                        a[x][y]++;
                    }
                    else
                        break;
                }
                x = i, y = j;
                while (true)
                {
                    if (valid(--x, ++y))
                    {
                        a[x][y]++;
                    }
                    else
                        break;
                }
                x = i, y = j;
                while (true)
                {
                    if (valid(--x, --y))
                    {
                        a[x][y]++;
                    }
                    else
                        break;
                }

                queen(v, s, a, i, j, n);

                s.pop_back();
                a[i][j]--;
                for (int k = 1; k <= n; k++)
                {
                    if (k != j)
                        a[i][k]--;
                    if (k != i)
                        a[k][j]--;
                }
                x = i, y = j;
                while (true)
                {
                    if (valid(++x, ++y))
                    {
                        a[x][y]--;
                    }
                    else
                        break;
                }

                x = i, y = j;
                while (true)
                {
                    if (valid(++x, --y))
                    {
                        a[x][y]--;
                    }
                    else
                        break;
                }
                x = i, y = j;
                while (true)
                {
                    if (valid(--x, ++y))
                    {
                        a[x][y]--;
                    }
                    else
                        break;
                }
                x = i, y = j;
                while (true)
                {
                    if (valid(--x, --y))
                    {
                        a[x][y]--;
                    }
                    else
                        break;
                }
            }
        }
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    vector<vector<int>> a;
    for (int i = 0; i <= n; i++)
    {
        vector<int> x;
        for (int j = 0; j <= n; j++)
        {
            x.push_back(0);
        }
        a.push_back(x);
    }

    vector<vector<string>> v;
    vector<string> s;
    queen(v, s, a, 1, 1, n);
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << v[i][j][k];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}