#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    int l,r;
    while(t--){
        cin >> l >> r;
        cout << 2*(r-l) + 1 << endl;
    }
    return 0;
}