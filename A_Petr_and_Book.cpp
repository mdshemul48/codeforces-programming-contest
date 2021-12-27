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
    int n, x, y = 5000, z;
    cin >> n;
    vector<int> arr;
    fo(int i = 0; i < 7; i++)
    {
        cin >> x;
        arr.push_back(x);
    }

    while (n > 0)
    {
        fo(int i = 0; i < 7; i++)
        {
            n -= arr[i];
            if (n <= 0)
            {

                y = i + 1;
                break;
            }
        }
    }

    if (y == 5000)
    {
        y = 1;
    }
    cout << y << endl;
}

int32_t main()
{
    exc();
    return 0;
}