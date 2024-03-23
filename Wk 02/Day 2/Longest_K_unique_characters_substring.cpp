class Solution
{
public:
    int longestKSubstr(string s, int k)
    {
        int l = 0, r = 0, n = s.size(), ans = -1, cnt = 0;
        int a[26] = {0};
        while (r < n)
        {
            a[s[r] - 'a']++;
            if (a[s[r] - 'a'] == 1)
                cnt++;
            if (cnt == k)
            {
                ans = max(ans, r - l + 1);
            }
            else if (cnt > k)
            {
                a[s[l] - 'a']--;
                if (a[s[l] - 'a'] == 0)
                    cnt--;
                l++;
                if (cnt == k)
                {
                    ans = max(ans, r - l + 1);
                }
            }
            r++;
        }
        return ans;
    }
};