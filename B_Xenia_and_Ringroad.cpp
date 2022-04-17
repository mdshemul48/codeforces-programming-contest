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
    cin >> x;

    vector<int> arr;
    for (int i = 0; i < x; i++)
    {
        cin >> y;
        arr.push_back(y);
    }

    int on = 1;
    long long int t = 0;
    for (int i = 0; i < x; i++)
    {
        int target = arr[i];
        if (target > on)
        {
            t += target - on;
            on = target;
        }
        else if (target < on)
        {
            t += (n - on) + target;
            on = target;
        }
    }

    cout << t << endl;
}

int32_t main()
{
    exc();
    return 0;
}