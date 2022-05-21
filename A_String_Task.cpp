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
    int n, x, y, z;
    string input;
    cin >> input;
    map<char, bool> store;

    store['a'] = true;
    store['o'] = true;
    store['y'] = true;
    store['e'] = true;
    store['u'] = true;
    store['i'] = true;

    std::for_each(input.begin(), input.end(), [](char &c)
                  { c = ::tolower(c); });

    string result = "";
    for (int i = 0; i < input.size(); i++)
    {
        if (!store[input[i]])
        {
            result.push_back('.');
            result.push_back(input[i]);
        }
    }
    cout << result << endl;
}

int32_t main()
{
    exc();
    return 0;
}