#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        double in;
        cin >> in;
        cout << int(ceil((in / 2)) - 1) << endl;
    }
    return 0;
}