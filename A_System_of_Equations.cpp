#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double n, m;
    cin >> n >> m;

    int a = n, b = 0;
    int c = 0;
    while (a >= 0)
    {
        int sqr = sqrt(a);

        if (sqr * sqr == a && a + b == n && sqr + (b * b) == m)
        {
            c++;
        }

        a--;
        b++;
    }
    cout << c << endl;

    return 0;
}