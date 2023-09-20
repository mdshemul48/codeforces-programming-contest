#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if (m % n != 0)
    {
        cout << -1 << endl;
        return 0;
    }
    else if (n == m)
    {
        cout << 0 << endl;
        return 0;
    }

    int c = m / n;
    int r = 0;
    while (c != 1)
    {
        if (c % 2 == 0)
        {
            r++;
            c /= 2;
        }
        else if (c % 3 == 0)
        {
            r++;
            c /= 3;
        }
        else
        {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << r << endl;
    return 0;
}