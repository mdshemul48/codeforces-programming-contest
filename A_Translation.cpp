#include <bits/stdc++.h>
using namespace std;

// custom define
#define ll long long int
#define fo for
#define wh while
#define cout(v) cout << v << endl;
#define deb(v) cout << #v << "-> " << v << endl;

void exc()
{
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;

    for (int i = 0, j = s1.length() - 1; i < s1.size(); i++, j--)
    {
        if (s1[i] != s2[j])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int32_t main()
{
    exc();
    return 0;
}