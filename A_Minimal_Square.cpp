#include <iostream>

using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a < b)
        {
            a = 2 * a;
        }
        else
        {
            b = 2 * b;
        }
        int area = max(a, b) * max(a, b);
        cout << area << endl;
    }
    return 0;
}