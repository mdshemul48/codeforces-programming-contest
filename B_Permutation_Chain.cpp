#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        int t;
        cin >> t;

        cout << t << endl;

        vector<int> arr;
        for (int i = 0; i < t; i++)
        {
            arr.push_back(i + 1);
            cout << i + 1 << " ";
        }
        cout << endl;

        int i = 0, j = t - 1;

        while (i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            for (auto x : arr)
                cout << x << " ";
            cout << endl;
        }
    }

    return 0;
}