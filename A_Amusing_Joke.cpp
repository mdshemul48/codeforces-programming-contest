#include <bits/stdc++.h>

using namespace std;

void solve()
{

    string f, s, l;
    cin >> f >> s >> l;

    string fs = f + s;
    if (fs.length() != l.length())
    {
        cout << "NO" << endl;
        return;
    }

    if (f + s == l or s + f == l)
    {
        cout << "YES" << endl;
        return;
    }

    map<char, int> store;

    for (int i = 0; i < fs.length(); i++)
    {
        if (store[fs[i]])
        {
            store[fs[i]]++;
        }
        else
        {
            store[fs[i]] = 1;
        }
    }

    for (int i = 0; i < l.length(); i++)
    {
        if (store[l[i]])
        {
            store[l[i]]--;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }

        if (store[l[i]] < 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    solve();

    return 0;
}