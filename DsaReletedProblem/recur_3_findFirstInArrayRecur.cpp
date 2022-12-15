#include <iostream>

using namespace std;

int findFirstIndexOfElement(int arr[], int n, int i, int m)
{
    if (n == i)
        return -1;

    if (arr[i] == m)
        return i;

    return findFirstIndexOfElement(arr, n, i + 1, m);
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

    cout << findFirstIndexOfElement(arr, n, 0, m);
    return 0;
}