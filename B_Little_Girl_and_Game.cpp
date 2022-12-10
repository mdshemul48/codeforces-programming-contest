#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    string s;
    cin >> s;

    map<char, int> mp;

    for (char i : s)
    {
        mp[i]++;
    }

    int odd = 0;
    for (auto i : mp)
    {
        if (i.second % 2 == 1)
        {
            odd++;
        }
    }

    if (odd % 2 == 1 || odd == 0)
    {
        cout << "First" << endl;
    }
    else
    {
        cout << "Second" << endl;
    }

    return 0;
}