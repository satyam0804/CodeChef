#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int x;
    while(t--){
        cin >> x;
        if(x>= 1 && x<100){
            cout << "Easy" << endl;
        }
        else if(x>= 100 && x<200){
            cout << "Medium" << endl;
        }
        else{
            cout << "Hard" << endl;
        }
    }

    return 0;
}