#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<long long int> dor;
    vector<long long int> latter;
    long long int in;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        dor.push_back(in);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> in;
        latter.push_back(in);
    }

    long long int sum = dor[0];
    int d = 0;
    int i = 0;
    while (i < m)
    {
        if (latter[i] <= sum)
        {
            cout << d + 1 << " " << latter[i] - (sum - dor[d]) << endl;
            i++;
        }
        else
        {
            sum += dor[++d];
        }
    }

    return 0;
}