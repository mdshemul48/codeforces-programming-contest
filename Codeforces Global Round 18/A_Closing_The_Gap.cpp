#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        sum += in;
    }
    int result = sum % n == 0 ? 0 : 1;
    cout << result << endl;
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