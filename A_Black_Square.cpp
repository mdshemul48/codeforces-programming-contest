#include <iostream>
#include <string>

using namespace std;

int main()
{

    int one, two, three, four;
    cin >> one >> two >> three >> four;
    string s;
    cin >> s;
    int c = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] - '0') == 1)
        {
            c += one;
        }
        else if ((s[i] - '0') == 2)
        {
            c += two;
        }
        else if ((s[i] - '0') == 3)
        {
            c += three;
        }
        else if ((s[i] - '0') == 4)
        {
            c += four;
        }
    }
    cout << c << endl;

    return 0;
}