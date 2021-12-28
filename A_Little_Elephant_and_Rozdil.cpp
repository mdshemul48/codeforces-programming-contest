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
    vector<int> arr;
    map<int, bool> sto;

    fo(int i = 0; i < n; i++)
    {
        cin >> x;
        sto[x] = 1;
        arr.push_back(x);
    }
    int min = arr[0];
    int in = 0;
    for (int i = 1; i < n; i++)
    {

        if (min > arr[i])
        {
            min = arr[i];
            in = i;
        }
    }
    fo(int i = 0; i < n; i++)
    {
        if (arr[i] == min and i != in)
        {
            cout << "Still Rozdil" << endl;
            return;
        }
    }
    cout << in + 1 << endl;
}

int32_t main()
{
    exc();
    return 0;
}