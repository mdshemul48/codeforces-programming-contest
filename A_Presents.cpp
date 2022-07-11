#include <iostream>

using namespace std;

int main()
{
    int n, c;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        arr[in - 1] = i + 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}