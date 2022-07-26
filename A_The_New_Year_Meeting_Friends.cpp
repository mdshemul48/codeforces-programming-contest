#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[3];

    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);
    int sum = 0;
    sum += arr[1] - arr[0];
    sum += arr[2] - arr[1];
    cout << sum << endl;
    return 0;
}