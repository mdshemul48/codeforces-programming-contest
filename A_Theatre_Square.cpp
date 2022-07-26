#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double n, m, a;
    cin >> n >> m >> a;
    int long long result = ceil(n / a) * ceil(m / a);
    cout << result << endl;
    return 0;
}