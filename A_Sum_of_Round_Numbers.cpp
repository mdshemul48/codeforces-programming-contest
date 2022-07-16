#include <iostream>
#include <cmath>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int in;
        cin >> in;
        int p = in;
        int c = 0;
        vector<int> arr;
        for (int i = 0; i <= 5; i++)
        {
            int last = p % 10;
            if (last != 0)
            {
                arr.push_back(float(last * pow(10, i)));
                c++;
            }
            p = p / 10;
        }

        cout << c << endl;
        for (int i = 0; i < c; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}