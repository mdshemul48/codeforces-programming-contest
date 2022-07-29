#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int odd = 0;
    int even = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % 2 != 0)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (odd < even && arr[i] % 2 != 0)
        {
            cout << i + 1 << endl;
            return 0;
        }
        else if (even < odd && arr[i] % 2 == 0)
        {

            cout << i + 1 << endl;
            return 0;
        }
    }

    return 0;
}
