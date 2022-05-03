#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m;  

        ll arr[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        ll count(0);
        sort(arr, arr+n);
        for(int i=0; i<n; i++){
            if(arr[i] != arr[i+1]){
                count++;
            }
        }
        if(count < m){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}