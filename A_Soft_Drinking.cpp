#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int mil = k * l;

    int toast = mil / nl;

    int limes = c * d;

    int salt = p / np;

    int result = min(min(salt, toast), limes) / n;
    cout << result << endl;

    return 0;
}