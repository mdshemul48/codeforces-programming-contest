#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string n;
    cin >> n;
    string nInverse = n;

    reverse(nInverse.begin(), nInverse.end());
    cout << n << "" << nInverse << endl;
    return 0;
}