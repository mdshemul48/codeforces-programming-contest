#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    int in;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        arr.push_back(in);
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; i++)
    {
        int a = arr[i];
        int b = arr[i + 1];
        int c = arr[i + 2];
        if (a< (b+c) && b< (a+c) && c< (a+b)){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}