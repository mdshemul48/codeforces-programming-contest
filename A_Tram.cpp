#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int o, i;
    cin >> o >> i;
    int prev = i;
    int max = i;
    for (int i = 1; i < n; i++)
    {
        int co, ci;
        cin >> co >> ci;
        int cp = prev - co + ci;
        if (cp > max)
        {
            max = prev - co + ci;
        }

        prev = cp;
    }
    cout << max << endl;
}

int main()
{
    solve();

    return 0;
}