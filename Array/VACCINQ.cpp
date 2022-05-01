#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int N, P, X, Y;
    while (t--)
    {
        cin >> N >> P >> X >> Y; 

        int arr[N];

        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        int i(0), sum(0);

        while (i < P)
        {
            if (arr[i] == 1)
            {
                sum += Y;
            }
            else
            {
                sum += X;
            }
            
            i++;
        }
        cout << sum << endl;
    }
    return 0;
}
