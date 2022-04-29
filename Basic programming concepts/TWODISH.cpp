#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int n, a, b, c;

    while (t--)
    {
        cin >> n >> a >> b >> c;
        if(b>= n && a + c >= n){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl; 
        }
    }
    return 0;
}