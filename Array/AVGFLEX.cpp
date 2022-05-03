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
        ll n;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        ll count(0);
        // student boost if and only if mini > maxi

        for (int i = 0; i < n; i++)
        {
            ll mini(0), maxi(0);
            for (int j = 0; j < n; j++)
            {
                if (arr[i] >= arr[j])
                {
                    mini++;
                }
                else if(arr[i] < arr[j])
                {
                    maxi++;
                }
            }
            if (mini > maxi)
            {
                count++;
            }
        }
        cout << count << endl;
    }

    return 0;
}