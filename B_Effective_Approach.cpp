#include <bits/stdc++.h>

using namespace std;

void exc()
{
    int n;
    cin >> n;
    map<int, int> storeIndex;

    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        storeIndex[in] = i;
    }

    int tn;
    cin >> tn;
    long long int firstCount = 0;
    long long int secendCount = 0;
    while (tn--)
    {
        int in;
        cin >> in;

        firstCount += storeIndex[in] + 1;
        secendCount += n - storeIndex[in];
    }
    cout << firstCount << " " << secendCount << endl;
}

int main()
{

    exc();
    return 0;
}