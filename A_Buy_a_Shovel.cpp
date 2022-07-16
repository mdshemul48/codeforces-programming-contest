#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int sum = 0;
    for (int i = 1;; i++)
    {
        sum += n;
        if (sum % 10 == 0 || sum % 10 == m)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}