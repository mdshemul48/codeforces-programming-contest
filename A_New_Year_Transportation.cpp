#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1 && i <= m; i += arr[i])
    {
        if (arr[i] + (i + 1) == m)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;

    return 0;
}