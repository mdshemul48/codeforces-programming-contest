#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int in;
    while (n--)
    {
        cin >> in;
        if (in == 1)
        {
            cout << 2 << endl;
            continue;
        }
        if (in % 3 == 0)
        {
            cout << int(abs(in / 3)) << endl;
        }
        else
        {
            cout << int(ceil(abs(in / 3))) + 1 << endl;
        }
    }
    return 0;
}