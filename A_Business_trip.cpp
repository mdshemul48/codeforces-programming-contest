#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0 << endl;
        return 0;
    }

    int arr[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr + 12, greater<>());

    int c = 0;

    for (int i = 0; i < 12; i++)
    {
        c += arr[i];
        if (c >= n)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << "-1" << endl;
    return 0;
}