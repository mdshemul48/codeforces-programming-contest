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

    int no_of_5 = 0, no_of_0 = 0;
    for (int i = 1; i <= n; i++)
    {
        int digit;
        cin >> digit;
        no_of_5 += (digit == 5);
        no_of_0 += (digit == 0);
    }

    if (no_of_0 == 0)
    {
        cout << -1 << endl;
    }
    else if (no_of_5 < 9)
    {
        cout << 0 << endl;
    }
    else
    {
        int no_of_5s_in_num = (no_of_5 / 9) * 9;
        for (int i = 1; i <= no_of_5s_in_num; i++)
        {
            cout << 5;
        }
        for (int i = 1; i <= no_of_0; i++)
        {
            cout << 0;
        }
    }
}

int32_t main()
{
    exc();
    return 0;
}