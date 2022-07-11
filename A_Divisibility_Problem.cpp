#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int n, m, o = 0;
        cin >> n >> m;
        if (n % m == 0)
            cout << 0 << endl;
        else
            cout << m - (n % m) << endl;
    }
    return 0;
}