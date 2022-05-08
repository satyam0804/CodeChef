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
        ll L;
        cin >> L;

        string s;
        cin >> s;
        ll count(0);
        forn(tt, L){
            if(s[tt] == 'H'){
                count++;
            }
            else if(s[tt] == 'T'){
                count--;
            }
            if(count>1 || count<0){
                break;
            }
        }
        if(count ==0){
            cout << "Valid" << endl;
        }
        else{
            cout << "Invalid" << endl;
        }
    }
    return 0;
}