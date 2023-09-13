#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (n < m)
    {
        cout << -1 << endl;
    }
    else
    {
        int totalStep = (n / 2) + (n % 2);
        while (totalStep % m != 0)
        {
            totalStep++;
        }
        cout << totalStep << endl;
    }
    return 0;
}