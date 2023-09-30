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

        ll sumA = 0; 
        ll sumB = 0; 

        ll minA = numeric_limits<int>::max();
        ll minB = numeric_limits<int>::max();
        ll a,b;
        for (ll i = 0; i<n; i++){
            cin>>a;
            sumA+= a;
            minA = min(minA, a);
        }
        for (ll i = 0; i<n; i++){
            cin>>b; 
            sumB+= b; 
            minB = min(minB, b);
        }

        ll ansA = sumA+(minB*n);
        ll ansB = sumB+(minA*n);
       if (ansA>ansB){
        cout<<ansB<<endl;
       }else {
        cout<<ansA<<endl;
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