#include <bits/stdc++.h>
#define ll long long
#define pii pair<int, int>
using namespace std;
void comb_sum(vector<vector<int>> &ans, vector<int> &comb, vector<int> a, int n, int idx, int sum, int target)
{

    if (idx >= n)
    {
        if (sum == target)
        {
            ans.push_back(comb);
            return;
        }
        return;
    }
    if (sum > target)
        return;
    for (; idx < n; idx++)
    {
        if (sum + a[idx] > target)
            continue;
        sum += a[idx];
        comb.push_back(a[idx]);
        comb_sum(ans, comb, a, n, idx + 1, sum, target);

        sum -= a[idx];
        comb.pop_back();
        int j = idx;
        for (; j < n; j++)
        {
            if (a[idx] != a[j])
                break;
        }
        idx = j - 1;
    }
    comb_sum(ans, comb, a, n, idx + 1, sum, target);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, target, sum = 0;
    cin >> n >> target;
    vector<int> a(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    vector<vector<int>> ans;
    vector<int> comb;

    // if (sum < target)
    //     return 0;
    comb_sum(ans, comb, a, n, 0, 0, target);

    for (ll i = 0; i < ans.size(); i++)
    {
        sort(ans[i].begin(), ans[i].end());
    }
    sort(ans.begin(), ans.end());
    for (ll i = 0; i < ans.size(); i++)
    {
        if (ans[i] == ans[i - 1])
            continue;
        for (ll j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
    return 0;
}

// class Solution {
// public:
//     int x = 0;
//     void rec(int i, int tar, vector<int>& ans, vector<int>& c,
//              vector<vector<int>>& st) {

//         cout<<"call-"<<++x<<endl<<"array- ";
//         for(auto y : ans) cout<<y<<" ";
//         cout<<endl<<"index-"<<i<<" target-"<<tar<<endl;

//         if (i >= c.size()) {
//             if (tar == 0) {
//                 st.push_back(ans);
//             }
//             return;
//         }

//         if (c[i] <= tar) {
//             ans.push_back(c[i]);
//             rec(i + 1, tar - c[i], ans, c, st);
//             ans.pop_back();
//         }
//         int j=i;
//         while(j<c.size() && c[i]==c[j]){
//             j++;
//         }
//         rec(j, tar, ans, c, st);

//     }

//     vector<vector<int>> combinationSum2(vector<int>& c, int tar) {
//         int n = c.size();
//         vector<vector<int>> ans;
//         sort(c.begin(),c.end());

//         vector<int> v;

//         rec(0, tar, v, c, ans);

//         return ans;
//     }
// };