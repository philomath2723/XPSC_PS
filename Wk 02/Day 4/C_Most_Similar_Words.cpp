#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solve() {
    int n, m;
    cin>>n>>m;
    string s[n];
    for(int i=0; i<n; i++) cin>>s[i];
    int ans = INT_MAX;
    
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            int changer = 0;
            for(int k=0; k<m; k++) {
                changer += abs(s[i][k] - s[j][k]);
            }
            ans = min(ans, changer);
        }
    }
    cout << ans << '\n';   
        
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--) solve();
    return 0;
}