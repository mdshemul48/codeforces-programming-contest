#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int ans = 0;
    while (n > 0)
    {
        if (n % 2 == 1)
        {
            ans++;
            n--;
        }
        else
        {
            n = n / 2;
        }
    }
    cout << ans << endl;
    return 0;
}