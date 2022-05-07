#include <bits/stdc++.h>
#define ll long long
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, a, b;
        cin >> n >> a >> b;
        ll sp(0), ap(0);
        forn(tt, n)
        {
            string s;
            cin >> s;

            string s1 = "EQUINOX";
            ll n1 = s1.size();

            bool f = false;
            forn(j, n1)
            {
                if (s[0] == s1[j])
                {
                    f = true;
                    break;
                }
            }
            if (f)
                sp += a;
            else
                ap += b;
        }
        if (ap > sp)
        {
            cout << "ANURADHA" << endl;
        }
        else if (ap < sp)
        {
            cout << "SARTHAK" << endl;
        }
        else if (ap == sp)
        {
            cout << "DRAW" << endl;
        }
    }
    return 0;
}