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
        string s; 
        cin>>n>>k;
        cin>>s;
    
        int sum = 0; 
        for (int i = 0; i<k;i++){
            sum+= s[i] == 'B'? 1: 0;
        }
        int maxK = sum; 

        int st = 0;
        int en = k; 
        while(en<n){
            sum -= s[st] == 'B'? 1 : 0; 
            sum+= s[en] == 'B'? 1: 0;
            st++;
            en++; 
            maxK = max(maxK, sum);
        }
        
        if (k<= maxK){
            cout<< 0<<endl;
        }else {
            cout<< k-maxK<<endl;
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