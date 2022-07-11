#include <iostream>

using namespace std;

int main()
{
    int n;
    int count = 0;
    cin >> n;

    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (x + 2 <= y)
        {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}