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
    ll n;
    cin >> n;
    ll arr[n];

    for (ll i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    ll min = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[0] == arr[i])
        {
            min++;
        }

        if (arr[i] == arr[n - 1])
            max++;
    }

    if (arr[0] - arr[n - 1] == 0)
    {
        cout << arr[n - 1] - arr[0] << " " << n * (n - 1) / 2 << endl;
    }
    else
    {
        cout << arr[n - 1] - arr[0] << " " << min * max << endl;
    }
    return 0;
}