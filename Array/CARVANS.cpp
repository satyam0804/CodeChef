#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll count = 1;
        for (int i = 0; i < n; i++)
        {
            if (a[i + 1] <= a[i])
            {
                count++;
            }
            else
            {
                a[i + 1] = a[i];
            }
        }
        cout << count << endl;
    }
    return 0;
}
