#include<iostream> 

using namespace std;

int main(){
    int n;
    cin>> n; 
    int arr[n];
    int store[n];
    fill(store, store+n, -1);

    for (int i =0;i<n; i++){
        cin>> arr[i];
    }

    for (int i = 0; i<n; i++){
        if (store[arr[i]] != -1){
            cout<<store[arr[i]]<<endl;
            return 0;
        }else{
            store[arr[i]] = i;
        }
    }

    return 0; 
}