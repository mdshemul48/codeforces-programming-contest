#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr;
    int in = 1;
    int count = 1;
    while (count <= 1000)
    {
        if (in % 3 != 0 and in % 10 != 3)
        {
            arr.push_back(in);
            count++;
        }
        in++;
    }

    int n;
    cin >> n;
    while (n--)
    {
        cin >> in;
        cout << arr[in - 1] << endl;
    }
    return 0;
}