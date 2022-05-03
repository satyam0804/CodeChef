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
        string x, y;
        cin >> x >> y;

        if (x.length() == y.length())
        {
            int len = x.length();
            for (int i = 0; i < len; i++)
            {
                if (x[i] == '?' and y[i] == '?')
                {
                    x[i] = y[i];
                }
                else if (x[i] != '?' and y[i] == '?')
                {
                    y[i] = x[i];
                }
                else if (x[i] == '?' and y[i] != '?')
                {
                    x[i] = y[i];
                }
            }
            if (x == y)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}