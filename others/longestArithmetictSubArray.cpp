#include<iostream>

using namespace std;

int main(){
    int n;
    cin>> n;
    int arr[n]; 
    for (int i =0; i<n; i++) cin>> arr[i];

    int largest = 0;
    for (int i =0; i<n-1; i++){
        int cur = 1; 
        int j = i;
        int diff = arr[j+1]- arr[j];
        while(diff == arr[j+1]-arr[j]){
            cur++;
            j++;
        }
        largest= max(largest, cur);
    
    }
    cout<<largest<<endl;

    return 0; 
}