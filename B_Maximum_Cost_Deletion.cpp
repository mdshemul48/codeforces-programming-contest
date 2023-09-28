#include <bits/stdc++.h>
using namespace std;

// custom define
void dbg_out() { cerr << endl; }
template <typename Head, typename... Tail>
void dbg_out(Head H, Tail... T)
{
    cerr << ' ' << H;
    dbg_out(T...);
}
#define dbg(...) cerr << "(" << #__VA_ARGS__ << "):", dbg_out(__VA_ARGS__)

#define ll long long
#define pub push_back
#define pob pop_back
#define all(X) (X).begin(), (X).end()

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define minus cout << -1 << endl
#define cout(v) cout << v << endl;

void exc()
{
    int t, n, a, b;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> n >> a >> b;
        cin >> s;
        int sum = n * a;
        if (b <= 0)
        {
            int c0 = 0;
            int z = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '0')
                {
                    while (s[i] == '0' && i < n)
                    {
                        i++;
                        z++;
                    }
                    c0++;
                }
            }
            if (z != n)
                c0++;

            int c1 = 0;
            int one = 0;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    while (s[i] == '1' && i < n)
                    {
                        i++;
                        one++;
                    }
                    c1++;
                }
            }
            if (one != n)
                c1++;
            int cnt = min(c0, c1);
            sum += cnt * b;
        }
        else
        {
            sum += n * b;
        }
        cout << sum << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}