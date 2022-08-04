#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> p;
    vector<int> m;
    vector<int> pe;

    int in;
    for (int i = 1; i <= n; i++)
    {
        cin >> in;
        if (in == 1)
            p.push_back(i);
        else if (in == 2)
            m.push_back(i);
        else
            pe.push_back(i);
    }
    if (p.size() == 0 || m.size() == 0 || pe.size() == 0)
    {
        cout << 0 << endl;
        return 0;
    }
    else
    {
        int minT = min(p.size(), min(m.size(), pe.size()));
        cout << minT << endl;
        for (int i = 0; i < minT; i++)
        {
            cout << p[i] << " " << m[i] << " " << pe[i] << endl;
        }
    }

    return 0;
}