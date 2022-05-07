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
        ll n;
        cin >> n;
        string s;
        cin >> s;

        ll occu(0);
        forn(tt, n){
            if(s[tt] == '1'){
                occu++;
            }
        }
        ll ans = (occu * (occu + 1))/ 2;
        cout << ans << endl;
    }
    return 0;
}