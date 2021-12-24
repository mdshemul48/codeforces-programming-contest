#include <bits/stdc++.h>

using namespace std;
#define deb(x) cout << #x << " " << x << endl;
#define fo(i, n) for (i = i; i < n; i++)
#define out(n) cout << n << endl;
#define in(variable) cin >> variable;

int main()
{
    int n, c = 0;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int in;
        cin >> in;
        arr.push_back(in);
    }

    if (n == 2)
    {
        if (arr[0] >= arr[1])
        {
            cout << 0 << endl;
            return 0;
        }
        else
        {
            cout << 1 << endl;
            return 0;
        }
    }

    int hi = 0, h = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > h)
        {
            h = arr[i];
            hi = i;
        }
    }
    for (int i = hi; i > 0; i--)
    {
        swap(arr[i], arr[i - 1]);
        c++;
    }

    int li = n - 1, l = arr[n - 1];
    for (int i = n - 2; i > 0; i--)
    {
        if (arr[i] < l)
        {
            l = arr[i];
            li = i;
        }
    }

    for (int i = li; i < n - 1; i++)
    {
        swap(arr[i], arr[i + 1]);
        c++;
    }

    cout << c << endl;

    return 0;
}