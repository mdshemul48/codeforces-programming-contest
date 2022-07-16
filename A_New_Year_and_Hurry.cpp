#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    k = 240 - k;

    int c = 0;

    for (int i = 1; i <= n; i++)
    {
        k -= i * 5;

        if (k >= 0)
            c++;
    }

    cout << c << endl;
    return 0;
}