#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >>t;
    int w1, w2, x1, x2, M;
    while(t--){
        cin >> w1 >> w2 >> x1 >> x2 >> M;
        int a = w1 + M*x1;
        int b = w1 + M*x2;
        if(a<= w2 && b>= w2){
            cout << 1 << endl;
        }
        else{
            cout << 0 << endl;
        }
    } 
    return 0;
}