#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        long long sum = 0;
        for (long long i = 1; i <= n / 2; i++)
        {
            sum += i * i * 8;
        }
        cout << sum << endl;
    }
    return 0;
}