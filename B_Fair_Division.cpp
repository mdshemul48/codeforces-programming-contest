#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t, n, one = 0, two = 0, in;

    cin >> t;
    while (t--)
    {
        one = 0, two = 0;

        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end(), greater<>());

        for (int i = 0; i < n; i++)
        {
            if (one < two)
            {
                one += arr[i];
            }
            else
            {
                two += arr[i];
            }
        }
        if (one == two)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}