#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, y;

    while (n--)
    {
        int t;
        cin >> t;
        int minX = 0, maxX = 0, minY = 0, maxY = 0;
        while (t--)
        {
            cin >> x >> y;
            minX = min(minX, x);
            maxX = max(maxX, x);
            minY = min(minY, y);
            maxY = max(maxY, y);
        }

        int ans = (abs(minX) * 2) + (abs(minY) * 2) + (maxY * 2) + (maxX * 2);
        cout << ans << endl;
    }
    return 0;
}