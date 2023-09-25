#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a, b;
        bool failed = 0;
        cin >> a >> b;
        for (int i = 1; i < n; i++)
        {
            int x, y;
            cin >> x >> y;
            if (x >= a && y >= b)
            {
                failed = 1;
            }
        }
        if (failed)
        {
            cout << -1 << endl;
        }
        else
            cout << a << endl;
    }
    return 0;
}