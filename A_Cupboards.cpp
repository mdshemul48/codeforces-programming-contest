#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int r0 = 0, r1 = 0, l0 = 0, l1 = 0;
    int r, l;
    while (n--)
    {
        cin >> l >> r;
        if (l == 1)
        {
            l1++;
        }
        else
        {
            l0++;
        }

        if (r == 1)
        {
            r1++;
        }
        else
        {
            r0++;
        }
    }
    int result = min(r0, r1);
    result += min(l1, l0);
    cout << result << endl;
    return 0;
}