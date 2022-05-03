#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll M, x, y;
        cin >> M >> x >> y;

        ll arr[M];
        for(int i=0; i<M ; i++){
            cin >> arr[i];
        }

        ll count(0);
        ll dist = x * y;

        for(int i=1; i<=100; i++){
            bool safeHouse = true;
            for(int j=0; j<M; j++){
                ll leftRange = max(arr[j] - dist, (long long) 1);
                ll rightRange = min(arr[j] + dist, (long long) 100);

                if(i >= leftRange && i<= rightRange){
                    safeHouse = false;
                }
            }
            if(safeHouse){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}