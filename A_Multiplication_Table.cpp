#include <iostream>

using namespace std;

int main()
{
    long long int n, m;
    cin >> n >> m;
    int count = 0;
    for (int i = 1; i <= n; i++)
    {

        if (m % i == 0 && m / i <= n)
            count++;
    }
    cout << count << endl;
    return 0;
}