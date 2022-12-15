#include <iostream>

using namespace std;

int findTheLastOneInArray(int arr[], int n, int m)
{
    if (n == 1)
        return -1;

    if (arr[n - 1] == m)
        return n - 1;
    else
        return findTheLastOneInArray(arr, n - 1, m);
}

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << findTheLastOneInArray(arr, n, m);
    return 0;
}