#include<iostream>
#include<unordered_map> 

using namespace std;

int main(){
    int n;
    cin>> n;
    int arr[n];
    for (int i =0; i<n; i++){
        cin>> arr[i];
    }

    unordered_map<int, int> store;

    for (int i =0; i<n; i++){
        if (store[arr[i]]){
            cout<<store[arr[i]]-1<<endl;
            return 0; 
        }else{
            store[arr[i]] = i+1;
        }
    }
    cout<<"-1"<<endl;

    return 0; 
}