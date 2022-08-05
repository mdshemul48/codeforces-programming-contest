#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    if (0 < n)
    {
        cout << n << endl;
    }
    else
    {

        long long nl = n / 10;
        long long nll = ((n / 100) * 10) + (n % 10);
        if (nl > nll)
        {
            cout << int(nl) << endl;
        }
        else
        {
            cout << int(nll) << endl;
        }
    }

    return 0;
}