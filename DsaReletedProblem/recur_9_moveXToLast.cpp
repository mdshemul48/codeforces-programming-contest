#include <iostream>

using namespace std;

string moveXtoLast(string s)
{
    if (s.length() == 0)
        return "";

    char ch = s[0];
    string movedX = moveXtoLast(s.substr(1));
    if (ch == 'x')
    {
        return movedX + ch;
    }
    else
    {
        return ch + movedX;
    }
}
int main()
{
    string s;
    cin >> s;
    cout << moveXtoLast(s) << endl;
    return 0;
}