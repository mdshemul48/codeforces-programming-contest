#include <iostream>

using namespace std;

int main()
{
    long long int t, x, y, n, k, p;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> n;
        p = (n - y) / x;
        k = p * x + y;
        cout << k << endl;
    }
    return 0;
}