#include <iostream>
#include <cmath>
#include <limits.h>

using namespace std;

#define ll long long

ll bottom_up(ll n, ll a, ll b, ll c)
{
    ll dp[n + 1];
    dp[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll r1 = INT_MIN, r2 = INT_MIN, r3 = INT_MIN;
        if (i >= a)
        {
            r1 = dp[i - a];
        }
        if (i >= b)
        {
            r2 = dp[i - b];
        }
        if (i >= c)
        {
            r3 = dp[i - c];
        }
        dp[i] = 1 + max(r1, max(r2, r3));
    }
    return dp[n];
}

int main()
{
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    cout << bottom_up(n, x, y, z) << endl;
    return 0;
}