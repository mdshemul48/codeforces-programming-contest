#include<iostream> 
#include<climits> 

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

    int minIndex = INT_MAX;

    for (int i = 0; i<n; i++){
        if (store[arr[i]] != -1){
            minIndex = min(minIndex, store[arr[i]]);
        }else{
            store[arr[i]] = i;
        }
    }

    cout<<minIndex<<endl;

    return 0; 
}