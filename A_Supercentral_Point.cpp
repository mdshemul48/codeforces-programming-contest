#include <bits/stdc++.h>
using namespace std;

// custom define
#define ll long long int
#define fo for
#define wh while
#define cout(v) cout << v << endl;
#define deb(v) cout << #v << "-> " << v << endl;

void exc()
{
    int n, x, y, z;
    cin >> n;
    vector<int> left, right;
    fo(int i = 0; i < n; i++)
    {
        cin >> x >> y;
        left.push_back(x);
        right.push_back(y);
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        bool a(0), b(0), c(0), d(0);
        for (int j = 0; j < n; j++)
        {
            if (left[i] > left[j] && right[i] == right[j])
                a = 1;
            if (left[i] < left[j] && right[i] == right[j])
                b = 1;
            if (left[i] == left[j] && right[i] < right[j])
                c = 1;
            if (left[i] == left[j] && right[i] > right[j])
                d = 1;
        }

        if (a && b && c && d)
        {
            count++;
        }
    }
    cout << count << endl;
}

int32_t main()
{
    exc();
    return 0;
}