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
    cin >> n >> m;
    multiset<int> mini;
    multiset<int, greater<int>> maxi;
    for (int i = 0; i < m; i++)
    {
        int k;
        cin >> k;
        mini.insert(k);
        maxi.insert(k);
    }

    int total = 0;
    for (int i = 0; i < n; i++)
    {
        int x = *maxi.begin();
        total += x;
        maxi.erase(maxi.lower_bound(x));

        --x;
        if (x > 0)
        {
            maxi.insert(x);
        }
    }
    cout << total << " ";

    total = 0;
    for (int i = 0; i < n; i++)
    {
        int x = *mini.begin();
        total += x;
        mini.erase(mini.lower_bound(x));
        --x;
        if (x > 0)
        {
            mini.insert(x);
        }
    }
    cout << total << endl;
    return 0;
}