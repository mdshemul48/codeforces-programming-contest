#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
read:
    while (n--)
    {
        int j;
        cin >> j;

        vector<int> arr;
        for (int i = 0; i < j; i++)
        {
            int in;
            cin >> in;
            arr.push_back(in);
        }

        sort(arr.begin(), arr.end());

        for (int i = 1; i < j; i++)
        {
            if (arr[i] - arr[i - 1] > 1)
            {
                cout << "NO" << endl;
                goto read;
            }
        }

        cout << "YES" << endl;
    }
    return 0;
}