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


vector<int> v; 
void steve(){
    int n = 1000000;
    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (int p = 2; p*p<=n; p++){
    if (prime[p] == true){
        for (int i = p*p; i<=n; i+=p){
            prime[i] = false;
        }
    }
    }
    for (int p = 2; p<=n; p++){
        if (prime[p]) v.push_back(p);
    }

}

void exc()
{
    ll t,d;
    cin>>t; 

    steve();
    while(t--){
        cin>>d; 
        int a,ai, b; 
        for (int i = 0; i<v.size();i++){
            if (v[i]  - 1 >= d){
                a = v[i];
                break;
            }
        }
        for (int i  = 0; i<v.size(); i++){
            if (v[i] - a>= d){
                b = v[i];
                break;
            }
        }
        // dbg(a,b);
        cout<<a*b<<endl;
    }


    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}