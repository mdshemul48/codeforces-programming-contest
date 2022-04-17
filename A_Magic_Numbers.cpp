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
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4')
        {

            i += 2;
        }
        else if (s[i] == '1' && s[i + 1] == '4' && s[i + 2] != '4')
        {
            i += i + 1;
        }
        else if (s[i] == '1')
        {
            continue;
        }
        else
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout("YES");
}

int32_t main()
{
    exc();
    return 0;
}