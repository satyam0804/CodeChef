#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    double u, v, a, s;
    while (t--)
    {
        cin >> u >> v >> a >> s;
        float newV = sqrt((u*u) + 2*(-a)*s);
        if(newV > v){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
    return 0;
}