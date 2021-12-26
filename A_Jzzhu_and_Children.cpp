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
    float m;
    cin >> n >> m;
    int arr[n];
    fo(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= m)
        {
            arr[i] = 0;
        }
    }
    float moxa = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (ceil(arr[i] / m) >= moxa)
        {
            moxa = ceil(arr[i] / m);
            ans = i;
        }
    }
    cout << ans + 1 << endl;
}

int32_t main()
{
    exc();
    return 0;
}