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
    int t,n;
    cin>>t;
    while(t--){
       cin>>n;
       char arr[n]; 
        int pre[n], suf[n];
       for(int i = 0; i<n; i++){
            cin>>arr[i];
       }

       int c = 0; 
       unordered_map<char, bool> check;
       
       for(int i = 0; i<n; i++){
            if (check.find(arr[i]) == check.end()){
                check[arr[i]] = 1; 
                pre[i] = ++c; 
            }else pre[i] = c; 
       }
       c = 0; 
       check.clear();
       for (int i = n-1; i>=0; i--){
         if (check.find(arr[i]) == check.end()){
                check[arr[i]] = 1; 
                suf[i] = ++c; 
            }else suf[i] = c;
       }
        int a = 0; 
       for (int i = 0; i<n-1; i++){
            a = max(a, pre[i]+suf[i+1]);
       }
       cout<<a<<endl;
    }

    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}