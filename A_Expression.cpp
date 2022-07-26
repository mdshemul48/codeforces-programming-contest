#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int x, y, z;
    cin >> x >> y >> z;

    int maxi = x + y * z;
    maxi = max(maxi, x * (y + z));
    maxi = max(x * y * z, maxi);
    maxi = max((x + y) * z, maxi);
    maxi = max(x + y + z, maxi);
    cout << maxi << endl;
    return 0;
}