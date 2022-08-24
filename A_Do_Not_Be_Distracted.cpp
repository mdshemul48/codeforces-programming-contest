#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    int t;
    cin >> t;
start:
    while (t--)
    {
        string s;
        int n;
        cin >> n;
        cin >> s;

        unordered_map<char, int> map;
        for (int i = 0; i < s.size(); i++)
            map[s[i]]++;

        for (int i = 0; i < s.size() - 1; i++)
        {
            map[s[i]]--;
            if (s[i] != s[i + 1])
            {
                if (map[s[i]])
                {
                    cout << "NO" << endl;
                    goto start;
                }
            }
        }

        cout << "YES" << endl;
    }

    return 0;
}