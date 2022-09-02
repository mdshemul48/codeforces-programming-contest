#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        string num = to_string(n);
        int sumCol = ((num[0] - '0') - 1) * 10;
        int len = num.size();
        int sumRow = (num.size() * (1 + len)) / 2;
        cout << sumCol + sumRow << endl;
    }
    return 0;
}