#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main()
{
    int n, j, k;
    cin >> n;
    unordered_map<int, int> se;
    vector<int> arr;
    int c = 0;
    while (n--)
    {
        cin >> j >> k;
        if (se[j])
        {
            se[j]++;
        }
        else
        {
            se[j] = 1;
        }
        arr.push_back(k);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (se[arr[i]])
            c += se[arr[i]];
    }
    cout << c << endl;
    return 0;
}