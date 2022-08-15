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

    int n;
    cin >> n;
    vll a(100005, 0);
    int maxi = -1;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a[x]++;
        maxi = max(maxi, x);
    }

    vll b(100005, 0);
    b[0] = 0;
    b[1] = a[1];

    for (ll i = 2; i <= 100000; i++)
    {
        b[i] = max(b[i - 1], b[i - 2] + (a[i] * i));
    }
    cout << b[maxi];
    return 0;
}