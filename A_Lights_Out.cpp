#include <bits/stdc++.h>

using namespace std;
#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for (i = i; i < n; i++)
#define out(n) cout << n << endl;
#define in(variable) cin >> variable;

void toggle(int arr[3][3], int i, int j)
{
    if (i < 0 or i >= 3)
    {
        return;
    }
    if (j < 0 or j >= 3)
    {
        return;
    }

    if (arr[i][j] == 0)
    {
        arr[i][j] = 1;
    }
    else
    {
        arr[i][j] = 0;
    }
}

int main()
{
    int arr[3][3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j] = 1;
        }
    }

    int user[3][3] = {0};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int in;
            cin >> in;
            user[i][j] = in;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            while (user[i][j]--)
            {
                toggle(arr, i, j);     // current position
                toggle(arr, i, j - 1); // left
                toggle(arr, i, j + 1); // right
                toggle(arr, i - 1, j); // top
                toggle(arr, i + 1, j); // top
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            cout << arr[i][j];
        }
        cout << endl;
    }

    return 0;
}