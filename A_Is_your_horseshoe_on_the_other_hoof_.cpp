#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 4;
    map<string, bool> s;
    int c = 0;
    while (n--)
    {
        string i;
        cin >> i;
        if (s[i])
        {
            c++;
        }
        else
        {
            s[i] = 1;
        }
    }
    cout << c << endl;
    return 0;
}
