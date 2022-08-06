#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int in;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);

    int m;
    cin >> m;
    while (m--)
    {
        cin >> in;
        int p = upper_bound(arr, arr + n, in) - arr;
        cout << p << endl;
    }

    return 0;
}