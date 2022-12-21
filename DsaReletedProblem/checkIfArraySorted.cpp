#include <iostream>

using namespace std;

bool checkIfArraySorted(int arr[], int n)
{
    if (n == 2)
    {
        return arr[n - 2] < arr[n - 1];
    }

    if (arr[n - 2] < arr[n - 1])
    {
        return checkIfArraySorted(arr, n - 1);
    }
    else
        return false;
}

int main()
{
    int arr[] = {1, 2, 3, 6, 4, 5, 6};
    cout << checkIfArraySorted(arr, 6) << endl;
    return 0;
}