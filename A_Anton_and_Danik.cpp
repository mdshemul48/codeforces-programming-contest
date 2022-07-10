#include <iostream>

using namespace std;

void exc()
{
    int n, a = 0, d = 0;
    string s;

    cin >> n;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'A')
            a++;
        else
            d++;
    }
    if (a == d)
    {
        cout << "Friendship" << endl;
    }
    else if (a < d)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Anton" << endl;
    }
}

int main()
{
    exc();
    return 0;
}