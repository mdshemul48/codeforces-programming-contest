#include <iostream>

using namespace std;

int main()
{
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (m * a > b)
    {
        int x = (n % m) * a;
        if (x > b)
        {
            cout << n / m * b + b << endl;
        }
        else
        {
            cout << n / m * b + x << endl;
        }
    }
    else
    {
        cout << n * a << endl;
    }
    return 0;
}