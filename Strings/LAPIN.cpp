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
        string s;
        cin >> s; // gaga
        ll n = s.size(); // 4
        
        string s1, s2;
        if(n%2==0){
            s1 = s.substr(0,n/2);
            s2 = s.substr(n/2,n);
        }
        else{
            s1 =s.substr(0, n/2);
            s2 = s.substr((n/2)+1, n);
        }
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        if(s1 != s2){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}