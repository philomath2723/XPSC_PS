#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll N = 0, S = 0, E = 0, W = 0;
    string move;
    cin >> move;
    for (ll i = 0; i < n; i++)
    {
        if (move[i] == 'N')
            N++;
        else if (move[i] == 'S')
            S++;
        else if (move[i] == 'E')
            E++;
        else
            W++;
    }

    if (abs(N - S) % 2 != 0 || abs(E - W) % 2 != 0 || (n == 2 && move[0] != move[1]))
    {
        cout << "NO" << '\n';
        return;
    }

    ll Hs = 0, Hn = 0, Rw = 0, Re = 0;
    if ((N == 0 && S == 0 && E == W && E > 0) || (E == 0 && W == 0 && S == N && S > 0))
    {
        if (E == W && E > 0)
        {
            Rw = W / 2;
            Re = E / 2;
        }
        if (S == N && S > 0)
        {
            Hs = S / 2;
            Hn = N / 2;
        }
    }
    else
    {
        if (N > S)
        {
            Hn = N - (N - S) / 2;
            Hs = S;
        }
        else
        {
            Hs = S - (S - N) / 2;
            Hn = N;
        }

        if (W > E)
        {
            Rw = W - (W - E) / 2;
            Re = E;
        }
        else
        {
            Re = E - (E - W) / 2;
            Rw = W;
        }
    }

    for (ll i = 0; i < n; i++)
    {
        if (move[i] == 'W' && Rw > 0)
        {
            move[i] = 'R';
            Rw--;
        }
        else if (move[i] == 'E' && Re > 0)
        {
            move[i] = 'R';
            Re--;
        }
        else if (move[i] == 'E' || move[i] == 'W')
            move[i] = 'H';

        if (move[i] == 'S' && Hs > 0)
        {
            move[i] = 'H';
            Hs--;
        }
        else if (move[i] == 'N' && Hn > 0)
        {
            move[i] = 'H';
            Hn--;
        }
        else if (move[i] == 'N' || move[i] == 'S')
            move[i] = 'R';
    }

    cout << move << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}