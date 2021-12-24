#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    float d = 0;
    for (int i = 0; i < n; i++)
    {
        float in;
        cin >> in;
        d += in;
    }

    cout << d / n << endl;

    return 0;
}