#include <bits/stdc++.h>

using namespace std;
#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for (i = i; i < n; i++)
#define out(n) cout << n << endl;
#define in(variable) cin >> variable;

int main()
{
    string n, m;
    cin >> n;
    cin >> m;
    string output = "";
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == m[i])
        {
            output += '0';
        }
        else
        {
            output += '1';
        }
    }
    cout << output << endl;

    return 0;
}