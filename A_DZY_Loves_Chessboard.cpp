#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define F first
#define S second
#define mp make_pair
#define MOD 1000000007
#define vi vector<int>
#define vll vector<ll>
#define pll pair<ll, ll>
#define pii pair<int, int>
#define all(p) p.begin(), p.end()
#define mid(s, e) (s + (e - s) / 2)
#define eb emplace_back
#define ull unsigned long long
#define bug(x) cout << "  [ " #x << " = " << x << " ]" << endl;

using namespace std;

int main()
{
    int n, m;
    char in;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> in;
            if (in == '.')
            {
                if ((i + j) % 2 == 0)
                {
                    cout << "B";
                }
                else
                {
                    cout << "W";
                }
            }
            else
            {
                cout << in;
            }
        }
        cout << endl;
    }
    return 0;
}