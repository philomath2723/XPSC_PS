#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void solve()
{
    ll n, x;
    cin >> n >> x;
    ll a[n], sum = 0;
    
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        sum+=a[i];
    }
    
    sort(a, a+n);
    unordered_map<ll, ll> mp;
    for(ll i=0; i<n; i++) mp[a[i]]++;
    ll ans = 0, water = n*a[n-1] - sum;
    if(x - water >= 0)
    {
        ans = a[n-1] + (x - water)/n;
    }
    else
    {
        ll i = 1, j = 0;
        water = 0;
        while (true)
        {
            while(j<n)
            {
                if(a[j] > i) break;
                else j += mp[a[j]];
                
            }
            if(water + j > x)
            {
                ans = i;
                break;
            }
            else
            {
                if(j != 0)
                {
                ll ck = i + (x-water)/j;
                if(a[j] >= ck)
                {
                    ans = ck;
                    break;
                }
                else
                {
                    water += j*(a[j]-a[j-1]);
                }
                }
                i = a[j] ;
            }
        }
    }
    cout <<ans<< '\n';
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