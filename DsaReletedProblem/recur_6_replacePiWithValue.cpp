#include <iostream>
#include <string>

using namespace std;

void replacePiWithValue(string s, int i)
{
    if (i == s.size() - 1)
    {
        cout << s[i];
        return;
    }

    if (i >= s.size())
        return;

    if (s[i] == 'p' && s[i + 1] == 'i')
    {
        cout << "3.14";
        replacePiWithValue(s, i + 2);
    }
    else
    {
        cout << s[i];
        replacePiWithValue(s, i + 1);
    }
}

int main()
{
    string s = "pippxxppixipi";
    replacePiWithValue(s, 0);

    return 0;
}