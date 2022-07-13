#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> s;

    s["Tetrahedron"] = 4;
    s["Cube"] = 6;
    s["Octahedron"] = 8;
    s["Dodecahedron"] = 12;
    s["Icosahedron"] = 20;

    int c = 0;
    while (n--)
    {
        string i;
        cin >> i;

        c += s[i];
    }
    cout << c << endl;
    return 0;
}