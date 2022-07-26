#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int i, j;
        cin >> i >> j;
        int large = max(i, j);
        int small = min(i, j);
        int t = large - small;
        int s = 0;
        for (int i = 10; i >= 1; i--)
        {
            s += t / i;
            t = t % i;
        }
        cout << s << endl;
    }
    return 0;
}