#include <bits/stdc++.h>

using namespace std;

void exc()
{
    int n, m;
    cin >> n >> m;
    vector<int> arr;

    int k = m;
    while (k--)
    {
        int g;
        cin >> g;
        arr.push_back(g);
    }
    sort(arr.begin(), arr.end(), greater<int>());

    int low = 10000;

    for (int i = 0; (i + n) - 1 < m; i++)
        low = min(low, arr[i] - arr[(i + n) - 1]);

    cout << low << endl;
}

int main()
{
    exc();
    return 0;
}