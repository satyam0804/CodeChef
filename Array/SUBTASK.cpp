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
        int N, M, K;
        cin >> N >> M >> K;

        int arr[N];
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        int NCount(0), MCount(0);

        for (int i = 0; i < N; i++)
        {
            if (arr[i] == 1)
            {
                NCount++;
            }
        }
        if (NCount == N)
        {
            cout << "100" << endl;
        }
        else
        {
            for (int i = 0; i < M; i++)
            {
                if (arr[i] == 1)
                {
                    MCount++;
                }
            }

            if (MCount == M)
            {
                cout << K << endl;
            }
            else
            {
                cout << "0" << endl;
            }
        }
    }
    return 0;
}