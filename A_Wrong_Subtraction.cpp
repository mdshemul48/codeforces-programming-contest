#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, p;
    cin >> p >> n;

    for (int i = 1; i <= n; i++)
    {
        if (p % 10 == 0)
        {
            p /= 10;
        }
        else
        {
            p -= 1;
        }
    }
    cout << p << endl;
}