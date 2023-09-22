#include <iostream>
#include <vector>
#include <limits>

// ...

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int in;
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            cin >> in;
            arr.push_back(in);
        }

        int miniVal = -1;
        int miniValIndex = std::numeric_limits<int>::max();
        for (int i = 0; i < n; i++)
        {
            if (miniValIndex > arr[i])
            {
                miniValIndex = arr[i];
                miniVal = i;
            }
        }
        arr[miniVal] += 1;
        long long int sum = 1;
        for (int i = 0; i < n; i++)
        {
            sum *= arr[i];
        }
        cout << sum << endl;
    }

    return 0;
}