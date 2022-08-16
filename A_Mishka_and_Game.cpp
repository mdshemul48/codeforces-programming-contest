#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int m = 0, c = 0;

    while (n--)
    {
        int x, y;
        cin >> x >> y;
        if (x > y)
        {
            m++;
        }
        else if (x < y)
        {
            c++;
        }
    }

    if (m == c)
    {
        cout << "Friendship is magic!^^" << endl;
    }
    else if (m < c)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Mishka" << endl;
    }
    return 0;
}