#include<iostream> 

using namespace std;

int main(){
    int n;
    cin>> n;
    int arr[n];

    for (int i =0; i<n; i++){
        cin>> arr[i];
    }

    int prevMax = 0;
    int count = 0; 
    for (int i =0; i<n; i++){
        if (prevMax<arr[i] && (arr[i]> arr[i+1] || i==n-1)){
            count++;
        }
        prevMax = max(arr[i], prevMax);
    }
    cout<<count<<endl;  


    return 0;
}
