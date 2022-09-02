#include <iostream>

using namespace std;

int main()
{
    long long n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 2)
        {
            cout << "YES" << endl;
            continue;
        }
        while (n % 2 == 0)
        {
            n /= 2;
        }
        if (n > 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}