#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t, s, e;
    cin >> t;
    while(t--){
        cin >> s;

        ll q[s];

        // duration of intro song
        for(int i=0; i<s; i++){
            cin >> q[i];
        }

        // episode in season + length of each episode (e + 1)
        ll total(0);
        for(int j=0; j<s; j++){ // number of episode
            cin >> e;
            ll a[e];

            for(int i=0; i<e; i++){ // length of each episode in array
                cin >> a[i];
            }
            total += a[0]; // add watch time of first episode of each season

            for(int i=1; i<e; i++){
                total += (a[i] - q[j]); // skip every intro after 1 ep
            }
        }
        cout << total << endl;
    }
    return 0;
}