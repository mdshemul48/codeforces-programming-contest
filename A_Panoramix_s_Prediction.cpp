#include <bits/stdc++.h>

using namespace std;

int checkPrimeNumber(int n)
{
    int j, flag = 1;
    for (j = 2; j <= n / 2; ++j)
    {
        if (n % j == 0)
        {
            flag = 0;
            break;
        }
    }

    return flag;
}

int main()
{
    int n, m;
    cin >> n >> m;

    if (!checkPrimeNumber(n) or !checkPrimeNumber(m))
    {
        cout << "NO" << endl;
        return 0;
    }

    for (int i = n + 1; i <= m - 1; i++)
    {
        if (checkPrimeNumber(i))
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}