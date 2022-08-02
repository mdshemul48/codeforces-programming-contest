#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;

    while (n--)
    {
        cin >> s;
        cout << s[0];
        for (int i = 1; i < s.length(); i += 2)
        {
            cout << s[i];
        }
        cout << endl;
    }
    return 0;
}