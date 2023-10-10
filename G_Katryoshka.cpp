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
    long long int a,b,c; 
    cin>>a>>b>>c;
  
   if (a<=b && a<=c){
    cout<<a<<endl;
    return;
   }else {
        long long int sum =0;
        long long int minG = min(a,min(b,c));
        sum+= minG;
        a-= minG;
        b-= minG;
        c-= minG;

        if (a/2>0 && c>0){
            sum+= min(a/2, c);
        }

        cout<<sum<<endl;


   }

    

    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}
// 84 
// 92