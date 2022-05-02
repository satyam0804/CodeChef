#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k, q;

    cin >> n >> m >> k;

    int count(0);
    while (n--)
    {
        int arr[k];
        for (int i = 0; i < k; i++)
        {
            cin >> arr[i];
        }

        int sum(0);
        for (int e : arr)
            sum += e;

        cin >> q;
        if (sum >= m && q <= 10)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}