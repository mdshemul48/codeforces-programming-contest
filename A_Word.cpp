#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin >> a;
    string result = "";
    string result2 = "";
    // bool result = 'B' > 'b'; 1
    int u = 0;
    int l = 0;

    for (int i = 0; i < a.length(); i++)
    {
        if (isupper(a[i]))
        {
            u++;
        }
        else
        {
            l++;
        }
        result += toupper(a[i]);
        result2 += tolower(a[i]);
    }

    if (l >= u)
    {
        cout << result2 << endl;
    }
    else
    {
        cout << result << endl;
    }

    return 0;
}