#include <bits/stdc++.h>

using namespace std;

bool compare(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

int main()
{
    int s, n;
    cin >> s >> n;

    vector<pair<int, int>> arr;

    for (int i = 0; i < n; i++)
    {
        int ds, bs;
        cin >> ds >> bs;
        pair<int, int> dSbS = {ds, bs};
        arr.push_back(dSbS);
    }
    sort(arr.begin(), arr.end(), compare);

    for (int i = 0; i < n; i++)
    {
        if (s > arr[i].first)
        {
            s += arr[i].second;
        }
        else
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}