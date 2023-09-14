#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n;
        cin >> s;

        int ans = 0;
        int check = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                check++;
            }
            else
            {
                if (check == 0)
                {
                    ans++;
                }
                else
                {
                    check--;
                }
            }
        }
        cout << check << endl;
    }
    return 0;
}