#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a;
    string b;
    cin >> a >> b;
    if (a == b)
    {
        cout << -1 << endl;
        return 0;
    }
    cout << max(a.length(), b.length()) << endl;
    return 0;
}
