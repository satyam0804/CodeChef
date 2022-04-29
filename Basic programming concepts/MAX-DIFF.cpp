#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    int n, s;
    while(t--){
        cin >> n >> s;

        if(s<=n){
            cout << s << endl;
        }
        else{
            cout << 2*n-s << endl;
        }
    }    
    return 0;
}