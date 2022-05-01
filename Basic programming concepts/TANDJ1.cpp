#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int a, b, c, d, k;
    while (t--)
    {
        cin >> a >> b >> c >> d >> k;        //  1 1 2 3 4
        int total = abs(a - c) + abs(b - d); // 1+2=3
        if (total <= k && k%2 == total%2)
        { // 3>4
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}