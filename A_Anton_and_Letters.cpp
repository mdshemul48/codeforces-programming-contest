#include <iostream>
#include <set>
#include <string>

using namespace std;

int main()
{
    string a;
    getline(cin, a);

    set<char> arr;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            arr.insert(a[i]);
        }
    }
    cout << arr.size() << endl;

    return 0;
}