#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N = 2e5 + 1;
bool vis[N];
ll way[N];
ll par[N];
ll dfs(ll src, vector<ll> adj[])
{
    vis[src] = true;
    if (par[src] != -1 && adj[src].size() == 1)
    {
        return way[src] = 1;
    }
    for (auto x : adj[src])
    {
        if (!vis[x])
        {
            par[x] = src;
            way[src] += dfs(x, adj);
        }
    }
    return way[src];
}
void solve()
{
    memset(vis, false, sizeof(vis));
    memset(way, 0, sizeof(way));
    memset(par, -1, sizeof(par));
    ll n;
    cin >> n;
    vector<ll> adj[n + 1];
    for (ll i = 1; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1, adj);
    ll q;
    cin >> q;

    while (q--)
    {
        ll a, b;
        cin >> a >> b;
        cout << way[a] * way[b] << '\n';
    }
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