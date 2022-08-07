#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void exc()
{
    int t, n, k, a, b, sum, in;

    cin >> t;

    while (t--)
    {
        cin >> n >> k;
        vector<int> a;
        vector<int> b;

        for (int i = 0; i < n; i++)
        {
            cin >> in;
            a.push_back(in);
        }

        for (int i = 0; i < n; i++)
        {
            cin >> in;
            b.push_back(in);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<>());

        sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < b[i] && i <= k - 1)
            {
                sum += b[i];
            }
            else
            {
                sum += a[i];
            }
        }
        cout << sum << endl;
    }
}

int main()
{
    exc();
    return 0;
}
