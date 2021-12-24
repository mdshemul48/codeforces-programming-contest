#include <bits/stdc++.h>

using namespace std;
#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for (i = i; i < n; i++)
#define out(n) cout << n << endl;
#define in(variable) cin >> variable;

void solution()
{
}

int main()
{
    int n;
    cin >> n;
    if (n == 1 or n % 2 != 0)
    {
        cout << -1 << endl;
        return 0;
    }

    string a = "";
    int s = 1;
    int e = n;
    while (s < e)
    {
        if (a == "")
        {
            a = to_string(e) + "" + a;
        }
        else
        {
            a = to_string(e) + " " + a;
        }
        a += " " + to_string(s);
        s++;
        e--;
    }
    cout << a << endl;

    return 0;
}