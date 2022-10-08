#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int d = 0;
    int i = 0;
    while (n != 0)
    {
        d++;
        n--;
        i++;
        if (i == m)
        {
            i = 0;
            n++;
        }
    }
    cout << d << endl;

    return 0;
}