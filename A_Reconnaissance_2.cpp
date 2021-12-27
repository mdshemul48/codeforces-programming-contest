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
    int n;
    cin >> n;
    vector<int> arr;

    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        arr.push_back(in);
    }

    int diff = abs(arr[0] - arr[n - 1]);
    int f = 0;
    int s = n - 1;
    for (int i = 0; i < n; i++)
    {
        int cDiff = abs(max(arr[i], arr[i + 1]) - min(arr[i], arr[i + 1]));
        if (cDiff < diff)
        {
            f = i;
            s = i + 1;
            diff = cDiff;
        }
    }
    cout << f + 1 << " " << s + 1 << endl;
}

int32_t main()
{
    exc();
    return 0;
}