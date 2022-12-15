#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum = 0;
    while (n > 0)
    {
        int lastNumber = n % 10;
        sum += pow(lastNumber, 3);
        n = n / 10;
    }
    cout << sum << endl;
    return 0;
}