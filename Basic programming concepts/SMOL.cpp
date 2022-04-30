#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int n, k;
    while(t--){
        cin >> n >> k;  
        if(k==0){
            cout << n << endl;
        }
        else{
            cout << n % k << endl;
        }
    }
    return 0;
}