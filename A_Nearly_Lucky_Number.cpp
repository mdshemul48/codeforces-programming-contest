#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    cin >> n;

    int l = 0;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '7' or n[i] == '4')
        {
            l++;
        }
    }
    if (l == 7 or l == 4)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}