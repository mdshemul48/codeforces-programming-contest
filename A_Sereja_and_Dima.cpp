#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int l = 0, r = n - 1, s = 0, d = 0, t;
    bool c = 1;

    while (l <= r)
    {
        if (arr[l] <= arr[r])
        {
            t = arr[r];
            r--;
        }
        else
        {
            t = arr[l];
            l++;
        }

        if (c)
        {
            s += t;
        }
        else
        {
            d += t;
        }
        c = !c;
    }
    cout << s << " " << d << endl;

    return 0;
}