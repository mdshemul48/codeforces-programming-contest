#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int s = 0;
    for (;;)
    {
        n--;
        m--;
        s++;
        if (n == 0 || m == 0)
        {
            break;
        }
    }
    if (s % 2 == 0)
    {
        cout << "Malvika" << endl;
    }
    else
    {
        cout << "Akshat" << endl;
    }

    return 0;
}