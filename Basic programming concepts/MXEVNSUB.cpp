#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    int n;
    while(t--){
        cin >> n;
        int sum(0);
        for(int i=1; i<=n; i++){
            sum += i;
        }
        if(sum%2==0){
            cout << n << endl;
        }
        else{
            cout << n-1 << endl;
        }
    }

    return 0;
}