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

    vector<string> arr;
    for (int i = 0; i < n; i++)
    {
        string g;
        cin >> g;
        arr.push_back(g);
    }

    x = 1;
    string t = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == t)
        {
            x++;
        }
        else if (arr[i] != t)
        {
            x--;
        }
        if (x == 0)
        {
            t = arr[i];
            x = 1;
        }
    }
    cout << t << endl;
}

int32_t main()
{
    exc();
    return 0;
}