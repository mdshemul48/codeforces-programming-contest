#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, t;
    cin >> n >> t;
    string ans = "";

    if (t / 10 == 0)
    {
        for (int i = 0; i < n; i++)
        {
            ans += to_string(t);
        }
    }
    else {
        if (n> 1){
            ans = ans+ "1";
            for (int i = 0; i<n-1; i++){
                ans+= "0";
            }
        }else {
            cout<< -1<<endl;
        }
    }
    cout<<ans<<endl;
    return 0;
}