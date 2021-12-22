#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;

    cin >> n;
    cin >> s;

    int c = 0;
    for (int i = 0; i < n; i++)
    {
        while (s[i] == s[i + 1] and i < n)
        {
            c++;
            i++;
        }
    }

    cout << c << endl;
    return 0;
}