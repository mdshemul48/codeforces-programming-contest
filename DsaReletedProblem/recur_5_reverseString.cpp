#include <iostream>

using namespace std;

void reverseString(char arr[], int s, int e)
{
    if (s > e)
    {
        return;
    }
    swap(arr[s], arr[e]);
    reverseString(arr, s + 1, e - 1);
}

int main()
{
    char str[] = "binod";
    reverseString(str, 0, 4);
    cout << str << endl;
    return 0;
}