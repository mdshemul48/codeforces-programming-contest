#include <iostream>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i > a && n - i <= b)
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}