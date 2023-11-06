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
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    map<int, pair<int, int>> check;

    for (int i = 0; i < n; i++)
    {
        if (check.find(arr[i]) == check.end())
        {
            check[arr[i]] = make_pair(i, -1);
            count++;
        }
        else if (check.find(arr[i]) != check.end())
        {
            if (check[arr[i]].second == -1) check[arr[i]].second = i;
            else if (check[arr[i]].second != -2)
            {
                pair<int, int> prev = check[arr[i]];
                int prevDif = prev.second - prev.first;
                int currDif = i - prev.second;
                if (prevDif != currDif)
                {
                    check[arr[i]].second = -2;
                    count--;
                }
                else
                {
                    check[arr[i]].first = check[arr[i]].second;
                    check[arr[i]].second = i;
                }
            }
        }
    }
    
    cout << count << endl;
    for (auto i : check)
    {
        if (i.second.second != -2)
        {
            cout << i.first << " " << (i.second.second >= 0 ? i.second.second - i.second.first : 0) << endl;
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}