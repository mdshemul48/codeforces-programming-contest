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
        ll n, x; 
        ll c0 = 0, c1 = 0, c2 =0; 
        cin>>n; 
        
        for (int i = 0;i<n; i++){
            cin>>x; 
            x = x%3; 
            if (x == 0) c0++; 
            else if (x == 1) c1++;
            else c2++;
        }
        
        ll cnt = 0; 
        while(c0!= c2 || c1 !=c2 || c2!= c0){
            if (c0> n/3){
                cnt+= (c0 - n/3);
                c1 += (c0 - n/3);
                c0 = n/3;
            }

            if (c1> n/3){
                cnt+= (c1 - n/3);
                c2 += (c1 - n/3);
                c1 = n/3;
            }

            if (c2 > n/3){
                cnt+= (c2 - n/3);
                c0+= (c2 - n/3);
                c2 = n/3;
            }
        }
        cout<< cnt<<endl;

    }

    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}