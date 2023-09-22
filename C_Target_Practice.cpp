#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        char arr[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> arr[i][j];
            }
        }

        int rS = 0, cS = 0;
        int rE = 9, cE = 9;

        int sum = 0;
        int point = 1;
        while (rS <= rE && cS <= cE)
        {
            for (int i = cS; i <= cE; i++)
            {
                if (arr[rS][i] == 'X')
                {
                    sum += point;
                }
            }
            rS++;

            for (int i = rS; i <= rE; i++)
            {
                if (arr[i][cE] == 'X')
                {
                    sum += point;
                }
            }

            cE--;
            for (int i = cE; cS <= i; i--)
            {
                if (arr[rE][i] == 'X')
                {
                    sum += point;
                }
            }
            rE--;

            for (int i = rE; rS <= i; i--)
            {
                if (arr[i][cS] == 'X')
                {
                    sum += point;
                }
            }
            cS++;

            point++;
        }
        cout << sum << endl;
    }

    return 0;
}