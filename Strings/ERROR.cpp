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
        bool found = false;
        for (int i = 0; i + 2 < s.length(); i++)
        {

            // if(s.substr(i,3) == "101"){
            //     cout << "Good" << endl;
            //     break;
            // }
            // else{
            //     cout << "Bad" << endl;
            //     break;
            // }
            if (s[i] == s[i + 2] && s[i + 1] != s[i])
            {
                found = true;
                break;
            }
            
        }
        cout << (found ? "Good" : "Bad") << endl;
    }

    return 0;
}