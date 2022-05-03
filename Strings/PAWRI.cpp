#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        for(int i=0; i<s.length(); i++){
            if(s.substr(i, 5) == "party"){
                s[i+2] = 'w';
                s[i+3] = 'r';
                s[i+4] = 'i';
            }
        }   
        cout << s << endl;
    }
    return 0;
}
