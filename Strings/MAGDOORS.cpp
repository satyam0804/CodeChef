#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        int ans = 0;
        char cur = '0';
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == cur)
            {
                ans++;
                if (cur == '0')
                    cur = '1';
                else
                    cur = '0';
            }
        }
        cout << ans << endl;
    }
    return 0;
}