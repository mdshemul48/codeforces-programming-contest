#include<iostream> 

using namespace std;

int main(){
    int n; 
    cin>>n; 
    char arr[n+1];
    cin>>arr;
    int s = 0, e = n-1;
    while(s<e){
        if (arr[s]!=arr[e]){
            cout<<"0"<<endl;
            return 0;
        }
        s++;
        e--;
    }
    cout<<"1"<<endl;
    return 0;
}