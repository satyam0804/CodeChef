#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    int d, l , r;

    while(t--){
        cin >> d >> l >> r;

        if(d>r){
            cout << "Too Late" << endl;
        }
        else if(d<l){
            cout << "Too Early" << endl;
        }
        else{ 
            cout << "Take second dose now" << endl;
        }
    }
    return 0;
}