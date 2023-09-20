#include <iostream>
#include <string>

using namespace std;

int gcd(int a, int b)
{
    if (a % b == 0)
    {
        return b;
    }
    else
    {
        return gcd(b, a % b);
    }
}
int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        int lenA = a.length();
        int lenB = b.length();

        int aBLcm = lcm(lenA, lenB);

        string resA = "";
        for (int i = 1; i <= aBLcm / lenA; i++)
        {
            resA += a;
        }
        string resB = "";
        for (int i = 1; i <= aBLcm / lenB; i++)
        {
            resB += b;
        }
        if (resA == resB)
        {
            cout << resA << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}