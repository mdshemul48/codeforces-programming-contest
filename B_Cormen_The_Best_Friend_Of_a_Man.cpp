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
    int n,k;
    cin>>n>>k;
    int arr[n];
    for (int i = 0;i<n; i++){
        cin>>arr[i];
    }
    
    int in = 0; 
    for (int i = 0; i<n-1; i++){
        int totalIn2Day = arr[i]+arr[i+1];
        if (totalIn2Day<k){
            arr[i+1]+= k-totalIn2Day;
            in += k-totalIn2Day;
        }
    }

    cout<<in<<endl;
    for (int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }


    
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    exc();
    return 0;
}