#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int in;
        cin >> in;
        int arr[in];
        for (int i = 0; i < in; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < in - 1; i++)
        {
            if (arr[i] == arr[i + 1] && arr[i + 2] != arr[i])
            {
                cout << i + 3 << endl;
            }
            else if (arr[i] == arr[i + 2] && arr[i + 1] != arr[i])
            {
                cout << i + 2 << endl;
            }
            else if (arr[i + 1] == arr[i + 2] && arr[i] != arr[i + 1])
            {
                cout << i + 1 << endl;
            }
            else
            {
                continue;
            }
            break;
        }
    }
    return 0;
}