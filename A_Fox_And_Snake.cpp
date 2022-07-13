#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    string hash;
    for (int i = 1; i <= m; i++)
    {
        hash += "#";
    }

    string dot;
    for (int i = 1; i < m; i++)
    {
        dot += ".";
    }

    bool s = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            cout << hash << endl;
        }
        else
        {
            if (s)
            {
                cout << dot << "#" << endl;
            }
            else
            {
                cout << "#" << dot << endl;
            }
            s = !s;
        }
    }
    return 0;
}