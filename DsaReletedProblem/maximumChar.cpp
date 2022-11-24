#include<iostream> 
#include<string>

using namespace std;

int main(){
    string s; 
    cin>> s;
    int arr[26+1] = {0};

    int maxNum = 0; 
    for (int i =0; i<s.length(); i++){
        arr[int(s[i])%24]++;
        maxNum = max(maxNum,arr[int(s[i])%26]);
    }
    cout<<maxNum<<endl;
    return 0;
}