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

    while (n--)
    {
        vector<int> arr(3);
        cin >> arr[0] >> arr[1] >> arr[2];
        sort(arr.begin(), arr.end());
        if (arr[2] == arr[0] + arr[1])
        {
            cout << "YES" << endl;
        }
        else if (arr[1] == arr[2])
        {
            if (arr[0] % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else if (arr[0] == arr[1])
        {
            if (arr[2] % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int32_t main()
{
    exc();
    return 0;
}