#include<iostream> 

using namespace std;

int main(){
    int n,m, t;
    cin>>n>>m>>t;

    int arr[n][m];
    for (int i = 0; i<n; i++){
        for (int j =0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    int col = m-1, row = 0; 
    while(row<n && col>=0){
        if (arr[row][col]== t) {
            cout<<1<<endl;
            return 0;
        }
        else if (arr[row][col]>t){
            col--;
        }else{
            row++;
        }
    }
    cout<<0<<endl;
    return 0; 
}