#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int in;
    while (n--)
    {
        cin >> in;
        vector<int> arrPlus;
        vector<int> arrMinus;
        int plus = 0, minus = 0;
        for (int i = 1; i <= in; i++)
        {
            if (i % 2 == 0)
            {
                arrPlus.push_back(i);
                plus += i;
            }
            else
            {
                arrMinus.push_back(i);
                minus += i;
            }
        }
        if ((arrMinus[(in / 2) - 1] + (plus - minus)) % 2 == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            arrMinus[(in / 2) - 1] = arrMinus[(in / 2) - 1] + (plus - minus);
            cout << "YES" << endl;
            for (int i = 0; i < in / 2; i++)
            {
                cout << arrPlus[i] << " ";
            }
            for (int i = 0; i < in / 2; i++)
            {
                cout << arrMinus[i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}