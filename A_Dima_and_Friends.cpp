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
    int n, x, y, z, k;
    cin >> n;
    y = 0;
    z = 0;
    k = n;
    wh(k--)
    {
        cin >> x;
        y += x;
    }

    fo(int i = 1; i <= 5; i++)
    {
        if ((y + i) % (n + 1) != 1)
        {
            z++;
        }
    }
    cout << z << endl;
}

int32_t main()
{
    exc();
    return 0;
}