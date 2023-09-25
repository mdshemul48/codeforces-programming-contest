#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;
    unordered_map<string, int> count;

    for (int i = 0; i < n - 1; i++)
    {
        string two_gram = "";
        two_gram += s[i];
        two_gram += s[i + 1];
        if (count.find(two_gram) != count.end())
        {
            count[two_gram]++;
        }
        else
        {
            count[two_gram] = 1;
        }
    }

    int maxi = 0;
    string res = "";
    unordered_map<string, int>::iterator itr;

    for (itr = count.begin(); itr != count.end(); itr++)
    {

        if (itr->second > maxi)
        {
            maxi = itr->second;
            res = itr->first;
        }
    }
    cout << res << endl;

    return 0;
}