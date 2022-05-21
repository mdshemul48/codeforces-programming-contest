#include <bits/stdc++.h>
using namespace std;

// custom define
#define ll long long int
#define fo for
#define wh while
#define cout(v) cout << v << endl;
#define deb(v) cout << #v << "-> " << v << endl;

void exc()
{
    int n, x, y, z;
    cin >> n;
    cin>> x;

    int c = 0; 

    int arr[n];
    int arr2[x];

    for(int i=0; i<n; i++){
        int gg; 

        cin>>gg;
        arr[i] =gg; 
    }

    for (int i =0; i<x; i++){
         int gg; 
            cin>>gg;
        arr2[i] =gg; 
    }


    for (int i = 0; i<n; i++){
        for (int j = 0; j<x;j++){
            if (arr2[j]/arr[i] ==3){
                c++;
            }
        }
    }
    if (c == 0){
        cout<<1<<endl;
    }else{
        cout<<c<<endl;
    }

    
}

int32_t main()
{
    exc();
    return 0;
}