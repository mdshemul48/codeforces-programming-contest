#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        vector<int> arr;
        int j;
        cin >> j;
        for (int i = 0; i < j; i++)
        {
            int in;
            cin >> in;
            arr.push_back(in);
        }
        bool c = 0;

        for (int i = 0; i < j; i++)
        {
            arr[i] = arr[i + 1] - arr[i];
        }

        for (int i = 1; i < j - 1; i++)
        {
            if (arr[i] != arr[i - 1] && arr[i] == 0)
            {
                cout << "NO" << endl;
                c = 1;
                break;
            }
        }

        if (!c)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}