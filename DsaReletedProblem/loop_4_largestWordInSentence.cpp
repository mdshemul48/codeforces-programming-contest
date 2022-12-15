#include<iostream> 

using namespace std;

int main(){
    int n; 
    cin>>n; 
    cin.ignore();
    char arr[n+1];
    
    cin.getline(arr, n);
    cin.ignore();

    int ans = -1;
    int count = 0; 
    for (int i =0; i<n; i++){
        if (arr[i]!=' '){
            count++;
        }else{
            ans = max(count, ans);
            count = 0; 
        }
    }
    
    cout<<ans<<endl;

    return 0;
}