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

#define yes cout << "Yes" << endl
#define no cout << "No" << endl
#define minus cout << -1 << endl
#define cout(v) cout << v << endl;

bool check(int a,int b, int c, int d){
    return a%2+b%2+c%2+d%2<=1;
}


void exc()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        long long int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (check(a,b,c,d)) yes;
        else if (a>0&& b>0&&c>0 && check(a-1,b-1,c-1,d+1)){
            yes;
        }else no;

    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}