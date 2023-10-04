#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, r = 0, b = 0, rs = 0, bs = 0, x;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            rs += x;
            r = max(rs, r);
        }
        cin>>m;
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            bs += x;
            b = max(bs, b);
        }

        cout << r + b << endl;
    }
    return 0;
}