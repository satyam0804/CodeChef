#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k,x;
        cin >> n >> k;
        
        ll sum = 0;
        for(int i=0;i<=n-1;i++)
        {
            cin >> x;
            sum += x;
        }

        cout << sum % k<<endl;
    }
    return 0;
}