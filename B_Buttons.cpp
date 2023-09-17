#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int k = (n + 1) / 2;
    int totalPress = n + (n * (k - 1));

    cout<<totalPress<<endl;
    return 0;
}