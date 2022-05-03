#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n, m, x, y;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        cin >> x >> y;

        for(int i=0; i<n; i++){
            int f=0, u=0, p=0;
            string s;
            cin >>s;

            for(int i=0; i<m; i++){
                if(s[i] == 'F'){
                    f++;
                }
                else if(s[i] == 'P'){
                    p++;
                }
                else if(s[i] == 'U'){
                    u++;
                }
            }
            if(f>= x || (f>= x-1 && p>= y)){
                cout<< 1 ;
            }
            else{
                cout << 0;
            }
        }
        cout << endl;
    }

    return 0;
}