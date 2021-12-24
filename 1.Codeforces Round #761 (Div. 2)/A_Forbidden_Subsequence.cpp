#include <bits/stdc++.h>

using namespace std;
#define deb(x) cout << #x << " " << x << endl;
#define out(n) cout << n << endl;
#define in(variable) cin >> variable;
#define fo for

void solve()
{
    string s, t;
    cin >> s >> t;
    sort(s.begin(), s.end());
    if (t != "abc")
    {
        out(s);
        return;
    }

    map<char, int> f;
    fo(auto c
       : s)
    {
        f[c]++;
    }
    string x = "";

    while (f['a'] > 0)
    {
        x += 'a';
        f['a']--;
    }
    if (x.size())
    {
        while (f['c'] > 0)
        {
            x += 'c';
            f['c']--;
        }
        while (f['b'] > 0)
        {
            x += 'b';
            f['b']--;
        }
    }
    else
    {
        while (f['b'] > 0)
        {
            x += 'b';
            f['b']--;
        }
        while (f['c'] > 0)
        {
            x += 'c';
            f['c']--;
        }
    }

    for (int i = 0; i < s.length(); i++)
    {
        if (!(s[i] == 'a' or s[i] == 'b' or s[i] == 'c'))
        {
            x += s[i];
        }
    }

    cout << x << endl;
}

int main()
{
    int n;
    cin >> n;
    fo(int i = 0; i < n; i++)
    {
        solve();
    }

    return 0;
}