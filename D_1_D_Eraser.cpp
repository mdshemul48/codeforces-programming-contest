#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int j = 0;
        int ans = 0;
        bool bF = 0;
        for (int i = 0; i < n; i++)
        {
            char s;
            cin >> s;
            if (s == 'B' && bF != 1)
            {
                bF = 1;
            }

            if (bF == 1)
            {
                j++;
            }

            if (j == m || (j != 0 && n - 1 == i))
            {
                ans++;
                j = 0;
                bF = 0;
            }
        }
        cout << ans << endl;
    }

    return 0;
}