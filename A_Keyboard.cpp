#include <iostream>
#include <string>

using namespace std;

int findChar(string str, char chr)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == chr)
            return i;
    }
    return -1;
}

int main()
{
    string check = "qwertyuiopasdfghjkl;zxcvbnm,./";

    char side;
    string str;
    cin >> side;
    cin >> str;
    string result = "";

    for (int i = 0; i < str.length(); i++)
    {
        int found = findChar(check, str[i]);

        if (side == 'R')
        {
            result += check[found - 1];
        }
        else
        {
            result += check[found + 1];
        }
    }
    cout << result << endl;

    return 0;
}