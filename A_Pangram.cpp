#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, bool> st;

    for (int i = 0; i < n; i++)
    {
        st[s[i]] = 1;
    }

    for (char i = 'a', j = 'A'; i <= 'z' && j <= 'Z'; i++, j++)
    {

        if (!(st[i] || st[j]))
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}