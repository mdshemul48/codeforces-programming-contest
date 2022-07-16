#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int p = 0,
        c = 0;

    int in;
    while (n--)
    {
        cin >> in;
        if (in == -1)
        {

            if (p == 0)
                c++;
            else
            {
                if (p > 0)
                    p--;
            }
        }
        else
        {
            p += in;
        }
    }
    cout << c << endl;

    return 0;
}