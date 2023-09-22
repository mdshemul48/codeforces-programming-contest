#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2 != 0)
    {
        cout << 0 << endl;
        return 0;
    }
    long long int result =1;
    for (int i = 1; i <= n / 2; i++)
    {
        result *= 2;
        ;
    }
    cout << result << endl;
    return 0;
}