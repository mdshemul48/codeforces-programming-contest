#include <iostream>

using namespace std;

int main()
{
    int n, h;
    cin >> n >> h;

    int sum = 0;

    while (n--)
    {
        int k;
        cin >> k;
        if (k <= h)
        {
            sum += 1;
        }
        else
        {
            sum += 2;
        }
    }
    cout << sum << endl;
    return 0;
}