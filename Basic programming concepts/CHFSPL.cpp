#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int a, b, c, m(0);
    while (t--)
    {
        cin >> a >> b >> c;

        if(a+b >= b+c && a+b >= a+c){
            cout << a+b << endl;
        }
        else if(b+c >= a+b && b+c >= a+c){
            cout << b+c << endl;
        }
        else{
            cout << a +c << endl;
        }
        // int ab = a + b;
        // int bc = b + c;
        // int ac = a + c;
        // m = max(ab, m);
        // m = max(bc, m);
        // m = max(ac, m);
        // cout << m << endl;
    }
    return 0;
}