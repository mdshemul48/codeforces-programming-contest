#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
            continue;
        }
        else if (n == 2)
        {
            cout << -1 << endl;
            continue;
        }

        bool even = false;
        int oddCount = 1;
        int evenCount = 2;
        for (int i = 0; i < n; i++)
        {
            for (int i = 0; i < n; i++)
            {
                if (!even)
                {
                    cout << oddCount << " ";
                    if (oddCount == n * n || (n % 2 == 0 && oddCount == (n * n) - 1))
                        even = !even;
                    oddCount += 2;
                }
                else
                {
                    cout << evenCount << " ";
                    evenCount += 2;
                }
            }
            cout << endl;
        }
    }
    return 0;
}