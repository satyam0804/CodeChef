#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int count;
        for(int i=0; i<n; i++){
            if(arr[i]>=1 && arr[i]<=7){
                count = i;
            }
        }
        cout << count + 1 << endl;
    }
    return 0;
}