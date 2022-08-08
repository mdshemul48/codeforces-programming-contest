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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int in;
        int even = 0, odd = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> in;
            if (i % 2 != in % 2)
            {
                if (i % 2 == 0)
                    even++;
                else
                    odd++;
            }
        }
        if (even == odd)
        {
            cout << even << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }
    return 0;
}