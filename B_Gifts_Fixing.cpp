#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        vector<long long> b(n);
        long long miniA = 1e18, miniB = 1e18;

        for (int i = 0; i < n; i++)
        {
            cin >> a[i], miniA = min(miniA, a[i]);
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i], miniB = min(miniB, b[i]);
        }

        long long total = 0;
        for (int i = 0; i < n; i++)
        {
            long long d1 = a[i] - miniA;
            long long d2 = b[i] - miniB;

            total += max(d1, d2);
        }
        cout << total << endl;
    }
    return 0;
}