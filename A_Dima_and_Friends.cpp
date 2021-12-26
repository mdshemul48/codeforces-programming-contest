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
    cin >> n;
    x = 0;
    fo(int i = 0; i < n; i++)
    {
        cin >> y;
        x += y;
    }
    vector<int> arr;
    int d = 1;
    int f = n;
    fo(int i = 1; i <= x; i++)
    {
        if (d == 1)
        {
            arr.push_back(1);
            d = 0;
        }
        else
        {
            arr.push_back(0);
            f--;
        }
        if (f == 0)
        {
            d = 1;
            f = n;
        }
    }

    int c = 0;
    fo(int i = 1; i <= 5; i++)
    {
        if (d == 1)
        {
            arr.push_back(1);
            d = 0;
        }
        else
        {
            arr.push_back(0);
            f--;
        }
        if (f == 0)
        {
            d = 1;
            f = n;
        }

        if (arr[arr.size() - 1] != 1)
        {
            c++;
        }
    }
    cout << c << endl;
}

int32_t main()
{
    exc();
    return 0;
}