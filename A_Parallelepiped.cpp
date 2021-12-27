#include <bits/stdc++.h>
using namespace std;

// custom define
#define ll long long int
#define fo for
#define wh while
#define cout(v) cout << v << endl;
#define deb(v) cout << #v << "-> " << v << endl;

void exc()
{
    int n, x, y, z;
    cin >> n >> x >> y;
    int a = sqrt((n * x) / y);
    int b = sqrt((y * x) / n);
    int c = sqrt((y * n) / x);
    cout << 4 * (a + b + c) << endl;
}

int32_t main()
{
    exc();
    return 0;
}