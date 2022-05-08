#include <bits/stdc++.h>
#define ll long long
#define forn(i, n) for (int i = 0; i < int(n); i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        bool validSize = false, valLower = false, valUpper = false, valNumber = false, valSpecial = false;

        ll len = s.size();

        if (len >= 10)
        {
            validSize = true;
        }
        forn(tt, len)
        {
            if (s[tt] >= 'a' && s[tt] <= 'z')
            {
                valLower = true;
            }
            if ((s[tt] >= 'A' && s[tt] <= 'Z') && (tt != 0) && (tt != len - 1))
            {
                valUpper = true;
            }
            if ((s[tt] >= '0' && s[tt] <= '9') && (tt != 0) && (tt != len - 1))
            {
                valNumber = true;
            }
            if ((s[tt] == '@' or s[tt] == '#' or s[tt] == '%' or s[tt] == '&' or s[tt] == '?') && (tt != 0) && (tt != len - 1))
            {
                valSpecial = true;
            }
        }
        if(valSpecial && valUpper && valLower && valNumber && validSize){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;   
        }
    }
    return 0;
}