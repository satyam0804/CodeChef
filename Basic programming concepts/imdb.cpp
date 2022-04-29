#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;

    int n, x, s, r;
    while (t--)
    {
        cin >> n >> x;
        int m = INT_MIN;
        while (n--)
        {

            cin >> s >> r;
            if (x >= s)
            {
                m = max(m, r);
            }
        }
        cout << m << endl;
    }
    return 0;
}