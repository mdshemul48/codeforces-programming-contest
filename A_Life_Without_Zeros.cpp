#include<iostream> 
#include<string> 

using namespace std; 


int main(){
    string a; 
    string b; 
    cin>>a>>b; 
    
    string c = to_string(stoi(a) + stoi(b));
    string ae = "",be= "", ce="";
    for (int i = 0; i<a.size(); i++){
        if (a[i] !='0'){
            ae+=a[i];
        }
    }
    for (int i = 0; i<b.size(); i++){
        if (b[i] !='0'){
            be+=b[i];
        }
    }
    for (int i = 0; i<c.size(); i++){
        if (c[i] !='0'){
            ce+=c[i];
        }
    }
    
    if (stoi(ae)+stoi(be) == stoi(ce)){
        cout<<"YES"<<endl;
    }else cout<<"NO"<<endl;
    
    
    return 0; 
}
