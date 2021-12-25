#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> arr;
    int min = 1000,
        max = 0,
        sum = 0;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        if (min > in)
        {
            min = in;
        }
        if (max < in)
        {
            max = in;
        }
        sum += in;
    }

    int avg = sum / n;
    if (sum % n == 0)
    {
        cout << 0 << endl;
        return;
    }
    cout << (avg - min) << endl;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        solve();
    }

    return 0;
}