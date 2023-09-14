#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t; cin>>t; 
    while(t--){
        int n; 
        cin>>n; 

        string s;
        getline(cin, s);

        int err = 0; 
        for (int i = 0; i<n; i++){
            if (s[i] == '('){
                err++;
            }
        } 
        
    }
    return 0;
}