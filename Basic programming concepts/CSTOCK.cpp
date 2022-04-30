#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int S,A,B,C;
    while(t--){
        cin >> S >> A >> B >> C;
        float perValue =((S * (float)C)/100); // (183 * -17) /100
        float CurrPrice = S + perValue; // 151.89

        //cout << CurrPrice << endl;

        if(CurrPrice >= A && CurrPrice <= B){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}