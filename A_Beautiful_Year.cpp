#include <bits/stdc++.h>

using namespace std;

int main()
{

    int year;
    cin >> year;
    while (true)
    {
        year += 1;
        string yearS = to_string(year);
        if (yearS[0] == yearS[1] or yearS[0] == yearS[2] or yearS[3] == yearS[0] or yearS[1] == yearS[2] or yearS[2] == yearS[3] or yearS[1] == yearS[3])
        {
        }
        else
        {
            cout << yearS << endl;
            return 0;
        }
    }

    return 0;
}