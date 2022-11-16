#include<iostream> 

using namespace std;

// int main(){
//     int n, k;
//     cin>>n>>k;
//     int arr[n];
//     for (int i = 0; i<n; i++){
//         cin>>arr[i];
//     }

//     for (int i =0; i<n; i++){
//         for (int j = i+1; j<n; j++){
//             if (arr[i]+arr[j]==k){
//                 cout<<i<<" "<<j<<endl;
//                 return 0;
//             }
//         }
//     }
//     cout<<false<<endl;
//     return 0;
// }

int main(){
    int n, k; 
    cin>>n>>k; 
    int arr[n];

    for (int i =0; i<n; i++)cin>> arr[i];

    int i = 0, j = n-1;
    while(i<j){
        if (arr[i]+arr[j] == k){
            cout<<i<<" "<<j<<endl;
            return 0;
        }else if (arr[i]+arr[j]<k){
            i++;
        }else{
            j--;
        }
    }

    cout<<"not found"<<endl;

    return 0; 
}