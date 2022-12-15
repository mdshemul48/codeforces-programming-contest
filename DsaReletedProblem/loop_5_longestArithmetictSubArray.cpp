#include<iostream>

using namespace std;

int main(){
    int n;
    cin>> n;
    int arr[n]; 
    for (int i =0; i<n; i++) cin>> arr[i];

    int diff = arr[1]-arr[0];
    int count = 2;
    int maxInt = 2; 
    int j = 1; 
    while (j< n){
        if (arr[j+1]-arr[j] == diff){
            count++;
            maxInt = max(count, maxInt);
        }else{
            diff = arr[j+1]-arr[j];
            count = 2;
        }

        j++;
    }
    cout<<maxInt<<endl;

    return 0; 
}