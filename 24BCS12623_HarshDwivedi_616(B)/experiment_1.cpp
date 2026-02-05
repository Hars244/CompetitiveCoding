#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cnt[256] = {0};
        char mx = s[0], mn = s[0];

        for (int i = 0; i < n; i++)
        {
            cnt[s[i]]++;
            if (cnt[s[i]] > cnt[mx])
                mx = s[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (cnt[s[i]] < cnt[mn])
                mn = s[i];
            else if (cnt[s[i]] == cnt[mn] && s[i] != mx)
                mn = s[i];
        }

        for (int i = 0; i < n; i++)
        {
            if (s[i] == mn)
            {
                s[i] = mx;
                break;
            }
        }

        cout << s << '\n';
    }
    return 0;
}