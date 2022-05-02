#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // logic is  to just subtract minimum element and maximum element;
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

        sort(arr, arr + n); 
        int max = arr[n-1];   
        int min = arr[0];

        cout << max - min << endl;
    }
    return 0;
}