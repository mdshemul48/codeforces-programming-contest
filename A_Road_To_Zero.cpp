#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int x, y, a, b;
        cin >> x >> y >> a >> b;

        long long int maxVal = max(x, y);
        long long int minVal = min(x, y);

        long long int conA = (minVal * b) + ((maxVal - minVal) * a);
        long long int conB = (x + y) * a;

        if (conA < conB)
        {
            cout << conA << endl;
        }
        else
        {
            cout << conB << endl;
        }
    }
    return 0;
}