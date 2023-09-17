#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    int n, m;

    cin >> n >> m;

    map<string, string> check;
    string a, b;
    while (m--)
    {
        cin >> a >> b;
        check[a] = b;
    }

    while (n--)
    {
        string lecture;
        cin >> lecture;
        if (lecture.length() <= check[lecture].length())
        {
            cout << lecture << " ";
        }
        else
        {
            cout << check[lecture] << " ";
        }
    }

    return 0;
}