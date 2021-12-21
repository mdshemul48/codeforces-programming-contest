#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin >> a;

    string number = "";

    int c = 0;
    while (c <= a.length() - 1)
    {
        if (a[c] == '-' and a[c + 1] == '.')
        {
            number += '1';
            c += 2;
        }
        else if (a[c] == '-' and a[c + 1] == '-')
        {
            number += '2';
            c += 2;
        }
        else
        {
            number += '0';
            c += 1;
        }
    }

    cout << number << endl;

    return 0;
}