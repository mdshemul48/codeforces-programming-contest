#include<iostream> 
#include<climits>
using namespace std;

int main(){
    int n; 
    cin>> n; 
    int arr[n];
    for (int i= 0; i<n; i++){
        cin>> arr[i];
    }

    int csum[n+1];
    csum[0] = 0; 

    for (int i =1; i<=n; i++){
        csum[i] = csum[i-1]+ arr[i-1];
    }

    int maxSum = INT_MIN;
    for (int i = 1; i<=n; i++){
        int sum = 0; 
        for (int j =0; j<i; j++) {
            cout<<j<<" "<<i<<endl;
            sum = csum[i] - csum[j];
            maxSum = max(sum, maxSum);
        }
    }

    cout<<maxSum<<endl;
    return 0; 
}