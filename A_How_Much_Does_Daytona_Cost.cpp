#include <bits/stdc++.h>
using namespace std;

// custom define
void dbg_out() { cerr << endl; }
template<typename Head, typename... Tail>
void dbg_out(Head H, Tail... T) { cerr << ' ' << H; dbg_out(T...); }
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
    int t,n, k;
    cin>>t; 
    while(t--){
        cin>>n>>k;
        vector<int> arr;
        for (int i = 0; i<n; i++ ){
            int in; 
            cin>>in;
            arr.push_back(in);
        }
        bool checked = 0; 
        for (int i = 0; i<arr.size(); i++){
            if (arr[i] == k){
               checked =1 ; 
               break;
            }
        }
        if (checked){ yes;}else no;
    }

    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}