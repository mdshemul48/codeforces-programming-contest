#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    float sum = 0;
    while (n--)
    {
        int in;
        cin >> in;
        sum += in;
    }
    cout << ceil(sum / 4) << endl;
}