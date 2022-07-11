#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    unordered_map<char, bool> map;
    int c = 0;

    map['{'] = 1;
    map['}'] = 1;
    map[','] = 1;
    map[' '] = 1;

    for (int i = 0; i < s.length(); i++)
    {
        if (map.find(s[i]) == map.end())
        {
            c++;
            map[s[i]] = 1;
        }
    }
    cout << c << endl;
    return 0;
}