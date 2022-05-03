#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s, w;
    cin >> s;

    ll sLen = s.length();

    ll n;
    cin >> n;

    while (n--)
    {
        cin >> w;

        ll count(0);

        for (int i = 0; i < w.length(); i++)
        {
            for (int j = 0; j < sLen; j++)
            {
                if (w[i] == s[j])
                {
                    count++;
                }
            }
        }

        if (count == w.length())
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}